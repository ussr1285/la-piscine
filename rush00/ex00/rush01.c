/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejshin <yejshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:46:48 by yejshin           #+#    #+#             */
/*   Updated: 2023/08/26 21:46:49 by yejshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	print_letter(int x, char left, char middle, char right)
{
	int	letter;

	letter = 1;
	while (letter <= x)
	{
		if (letter == 1)
		{
			ft_putchar(left);
		}
		else if (letter == x)
		{
			ft_putchar(right);
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

	line = 1;
	if (x >= 1 && y >= 1)
	{
		while (line <= y)
		{
			if (line == 1)
			{
				print_letter(x, '/', '*', '\\');
			}
			else if (line == y)
			{
				print_letter(x, '\\', '*', '/');
			}
			else
			{
				print_letter(x, '*', ' ', '*');
			}
			line++;
			ft_putchar('\n');
		}
	}
}
