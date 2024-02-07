/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:12:32 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/27 20:48:20 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*to_string(int nb, char *string, int size, int *string_index)
{
	long	long_nb;
	int		value[10];
	int		value_index;

	long_nb = nb;
	value_index = 0;
	if (nb < 0)
		long_nb *= -1;
	value[value_index++] = long_nb % size;
	while (value_index < 10 && (long_nb / size) != 0)
	{
		if (value_index < 9)
			value[value_index++] = (long_nb % (size * 10)) / size;
		else
			value[value_index++] = long_nb / size;
		size *= 10;
	}
	while (value_index > 0)
	{
		string[(*string_index)++] = value[--value_index] + 48;
	}
	return (string);
}

void	ft_putnbr(int nb)
{
	int		size;
	int		string_index;
	char	string[10];

	size = 10;
	string_index = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		write(1, to_string(nb, string, size, &string_index), string_index);
	}
	else
		write(1, to_string(nb, string, size, &string_index), string_index);
}
