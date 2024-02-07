/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:14:36 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/12 23:59:42 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	get_str_size(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	recursive_putnbr(long nb)
{
	char	printable_c;

	if (nb == 0)
		return ;
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		recursive_putnbr(nb);
	}
	else
	{
		recursive_putnbr(nb / 10);
		printable_c = (nb % 10) + '0';
		write(1, &printable_c, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		recursive_putnbr((long) nb);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		write(1, par[i].str, get_str_size(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, get_str_size(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}
