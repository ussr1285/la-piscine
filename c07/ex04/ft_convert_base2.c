/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:35:42 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/12 20:17:16 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_unavail(char *base, int base_size)
{
	int				i;
	int				j;
	unsigned char	c;

	i = -1;
	while (++i < base_size - 1)
	{
		j = i;
		while (++j < base_size)
		{
			if (base[i] == base[j])
				return (1);
		}
	}
	i = -1;
	while (++i < base_size)
	{
		c = base[i];
		if (c == ' ' || (c >= 9 && c <= 13))
			return (1);
		else if (c == '+' || base[i] == '-')
			return (1);
	}
	return (0);
}

int	num_in_base(char *base, char *str, int str_i)
{
	int	c_num;
	int	i;

	c_num = -1;
	i = -1;
	while (base[++i] != '\0')
	{
		if (str[str_i] == base[i])
		{
			c_num = i;
			break ;
		}
	}
	return (c_num);
}

int	base_to_int(char *str, int start_i, char *base, int base_size)
{
	int	result;
	int	ten_size;
	int	i;
	int	end_i;

	result = 0;
	end_i = -1;
	ten_size = 1;
	i = start_i - 1;
	while (str[++i] != '\0')
	{
		if (num_in_base(base, str, i) == -1)
			break ;
		else if (num_in_base(base, str, i) >= 0)
			end_i = i;
	}
	if (end_i == -1)
		return (0);
	while (end_i >= start_i)
	{
		result += num_in_base(base, str, end_i) * ten_size;
		ten_size *= base_size;
		end_i--;
	}
	return (result);
}

int	atoi_base_logic(char *str, char *base, int base_size, int no_space_i)
{
	int	sign;
	int	i;
	int	start_i;

	sign = 1;
	start_i = -1;
	i = no_space_i;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && start_i == -1)
			sign *= -1;
		else if (!((str[i] == '+') && start_i == -1))
		{
			if (start_i == -1 && num_in_base(base, str, i) == -1)
				return (0);
			else if (num_in_base(base, str, i) == -1)
				return (sign * base_to_int(str, start_i, base, base_size));
			else if (start_i == -1)
				start_i = i;
		}
		i++;
	}
	return (sign * base_to_int(str, start_i, base, base_size));
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	i;
	int	result;

	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (base_size <= 1 || check_unavail(base, base_size) == 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
			break ;
		i++;
	}
	result = atoi_base_logic(str, base, base_size, i);
	return (result);
}
