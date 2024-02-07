/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:23:45 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 11:21:13 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// unsigned char
unsigned char	change_to_hex(unsigned char num)
{
	if (num >= 10 && num < 16)
		num += 87;
	else if (num < 10 && num >= 0)
		num += 48;
	return (num);
}

void	print_unprint_to_hex(unsigned char c)
{
	unsigned char	hex[2];

	if (c == 0)
		hex[0] = 0;
	else
	{
		hex[0] = change_to_hex(c / 16);
		hex[1] = change_to_hex(c % 16);
	}
	write(1, "\\", 1);
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			print_unprint_to_hex(str[i]);
		else
			write(1, &str[i], 1);
	}
}
