/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:17:31 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/08 15:28:53 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	get_str_size(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

int	check_dup(char *base, long base_size)
{
	int	i;
	int	j;
	int	dup;

	dup = 0;
	i = -1;
	while (++i < base_size - 1)
	{
		j = i;
		while (++j < base_size)
		{
			if (base[i] == base[j])
			{
				dup = 1;
				break ;
			}
		}
	}
	return (dup);
}

int	check_sign(char *base, long base_size)
{
	int	i;
	int	sign;

	sign = 0;
	i = -1;
	while (++i < base_size)
	{
		if (base[i] == '+' || base[i] == '-')
		{
			sign = 1;
			break ;
		}
	}
	return (sign);
}

void	recursive_putnbr(long nbr, char *base, long base_size)
{
	unsigned char	printable_c;
	long			u_nbr;

	u_nbr = (long) nbr;
	if (u_nbr == 0)
		return ;
	else if (u_nbr < 0)
	{
		u_nbr *= -1;
		write(1, "-", 1);
		recursive_putnbr(u_nbr, base, base_size);
	}
	else
	{
		recursive_putnbr(u_nbr / base_size, base, base_size);
		printable_c = base[(u_nbr % base_size)];
		write(1, &printable_c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	base_size;
	int		is_dup;
	int		is_sign;
	char	printable_c;

	base_size = get_str_size(base);
	is_dup = check_dup(base, base_size);
	is_sign = check_sign(base, base_size);
	if (base_size <= 1 || is_dup == 1 || is_sign == 1)
		return ;
	else if (nbr == 0)
	{
		printable_c = base[0];
		write(1, &printable_c, 1);
	}
	else
		recursive_putnbr((long) nbr, base, base_size);
}
