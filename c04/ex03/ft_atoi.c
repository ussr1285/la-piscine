/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:08:34 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/10 12:48:43 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	go_no_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_space(str[i]))
			break ;
		i++;
	}
	return (i);
}

int	parse_to_int(char *str, int start_i, int end_i)
{
	int	result;
	int	ten_size;
	int	i;

	result = 0;
	ten_size = 1;
	i = end_i;
	while (i >= start_i)
	{
		result += (str[i] - '0') * ten_size;
		ten_size *= 10;
		i--;
	}
	return (result);
}

int	ft_atoi_logic(char *str, int sign, int start_i, int end_i)
{
	int	i;

	i = go_no_space(str);
	while (str[i] != '\0')
	{
		if (str[i] == '-' && start_i == -1)
			sign *= -1;
		else if ((str[i] == '+') && start_i == -1)
		{
			i++;
			continue ;
		}
		else if (!(str[i] >= 48 && str[i] <= 57))
		{
			end_i = i - 1;
			break ;
		}
		else if (start_i == -1)
			start_i = i;
		end_i = i;
		i++;
	}
	if (start_i == -1 || end_i == -1)
		return (0);
	return (sign * parse_to_int(str, start_i, end_i));
}

int	ft_atoi(char *str)
{
	int	sign;
	int	start_i;
	int	end_i;

	start_i = -1;
	end_i = -1;
	sign = 1;
	return (ft_atoi_logic(str, sign, start_i, end_i));
}
