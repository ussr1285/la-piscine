/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejshin <yejshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:19:00 by geopark           #+#    #+#             */
/*   Updated: 2023/08/27 15:03:08 by yejshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	print_letter(int x, char edge_start, char middle, char edge_end)
{
	int	letter;

	letter = 1;
	while (letter <= x)
	{
		if (letter == 1)
			ft_putchar(edge_start);
		else if (letter == x)
			ft_putchar(edge_end);
		else
			ft_putchar(middle);
		letter++;
	}
}

void	rush(int x, int y)
{
	int	line;

	if (x <= 0 || y <= 0)
		return ;
	line = 1;
	while (line <= y)
	{
		if (line == 1)
			print_letter(x, 'A', 'B', 'C');
		else if (line == y)
			print_letter(x, 'C', 'B', 'A');
		else
			print_letter(x, 'B', ' ', 'B');
		line++;
		ft_putchar('\n');
	}
}
