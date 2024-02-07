/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:40:22 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 19:45:56 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
		recursive_putnbr(nb);
	}
}
