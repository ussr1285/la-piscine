/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejshin <yejshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:47:08 by yejshin           #+#    #+#             */
/*   Updated: 2023/08/27 15:03:18 by yejshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	print_letter(int x, char edge, char middle)
{
	int	letter;

	letter = 1;
	while (letter <= x)
	{
		if (letter == 1 || letter == x)
		{
			ft_putchar(edge);
		}
		else
		{
			ft_putchar(middle);
		}
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
		{
			print_letter(x, 'A', 'B');
		}
		else if (line == y)
		{
			print_letter(x, 'C', 'B');
		}
		else
		{
			print_letter(x, 'B', ' ');
		}
		line++;
		ft_putchar('\n');
	}
}
