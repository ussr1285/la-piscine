/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:35:45 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/12 20:18:06 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

extern int	ft_atoi_base(char *str, char *base);
extern int	check_unavail(char *base, int base_size);

int	str_len(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*only_zero(char *base)
{
	char	*string;

	string = (char *) malloc((2) * sizeof(char));
	if (string == 0)
		return (0);
	string[0] = base[0];
	string[1] = '\0';
	return (string);
}

char	*int_to_base(long num_nbr, char *base, int base_size, int string_size)
{
	char	*string;
	int		is_minus;

	is_minus = 0;
	if (num_nbr == 0)
		return (only_zero(base));
	if (num_nbr < 0)
	{
		string_size += 1;
		num_nbr *= -1;
		is_minus = 1;
	}
	string = (char *) malloc((string_size + 1) * sizeof(char));
	if (string == 0)
		return (0);
	if (is_minus == 1)
		string[0] = '-';
	string[string_size--] = '\0';
	while (string_size >= is_minus)
	{
		string[string_size--] = base[num_nbr % base_size];
		num_nbr /= base_size;
	}
	return (string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	num_nbr;
	int		string_size;
	int		base_from_size;
	int		base_to_size;
	long	base_nbr;

	base_from_size = str_len(base_from);
	base_to_size = str_len(base_to);
	if (base_from_size <= 1 || base_to_size <= 1
		|| check_unavail(base_from, base_from_size)
		|| check_unavail(base_to, base_to_size))
		return (0);
	num_nbr = (long) ft_atoi_base(nbr, base_from);
	base_nbr = num_nbr;
	string_size = 0;
	while ((base_nbr / base_to_size != 0) || (base_nbr % base_to_size != 0))
	{
		base_nbr /= base_to_size;
		string_size++;
	}
	return (int_to_base(num_nbr, base_to, base_to_size, string_size));
}
