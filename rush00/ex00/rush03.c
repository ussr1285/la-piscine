/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejshin <yejshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:47:14 by yejshin           #+#    #+#             */
/*   Updated: 2023/08/27 15:02:38 by yejshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c);

void	print_letter(int x, char start_edge, char middle, char end_edge)
{
	int	letter;

	letter = 1;
	while (letter <= x)
	{
		if (letter == 1)
			ft_putchar(start_edge);
		else if (letter == x)
			ft_putchar(end_edge);
		else
			ft_putchar(middle);
		letter++;
	}
}

void	rush(int x, int y)
{
	int	line;

	if (x > 0 && y > 0)
	{
		line = 1;
		while (line <= y)
		{
			if (line == 1 || line == y)
				print_letter(x, 'A', 'B', 'C');
			else
				print_letter(x, 'B', ' ', 'B');
			line++;
			ft_putchar('\n');
		}
	}
}
