/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:57:53 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 15:12:36 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_addr_to_hex(unsigned long num)
{
	int		i;
	int		rem;
	char	addr_hex[19];

	addr_hex[16] = ':';
	addr_hex[17] = ' ';
	addr_hex[18] = '\0';
	i = 15;
	while (!(num / 16 == 0 && num % 16 == 0) && i >= 0)
	{
		rem = num % 16;
		if (rem >= 10 && rem <= 15)
			addr_hex[i--] = rem + 87;
		else
			addr_hex[i--] = rem + '0';
		num /= 16;
	}
	while (i >= 0)
	{
		addr_hex[i--] = '0';
	}
	write(1, addr_hex, 18);
}

void	num_char_to_hex(unsigned char c)
{
	int		val;
	int		rem;
	char	buffer_char[2];

	val = c / 16;
	rem = c % 16;
	if (val >= 10 && val <= 15)
		buffer_char[0] = val + 87;
	else
		buffer_char[0] = val + '0';
	if (rem >= 10 && rem <= 15)
		buffer_char[1] = rem + 87;
	else
		buffer_char[1] = rem + '0';
	write(1, buffer_char, 2);
}

void	print_data_to_hex(char *addr, long size_now, long size)
{
	int	i;

	i = 0;
	while (i < 16 && size_now + i < size)
	{
		num_char_to_hex(addr[i++]);
		if (i % 2 == 0)
			write(1, " ", 1);
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	str = (char *)addr;
	i = 0;
	while (i < size && size != 0)
	{
		print_addr_to_hex((unsigned long)addr + i);
		print_data_to_hex(((char *)addr) + i, i, size);
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (str[i + j] >= 32 && str[i + j] <= 126)
				write(1, &str[i + j], 1);
			else
				write(1, ".", 1);
			j++;
		}
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
