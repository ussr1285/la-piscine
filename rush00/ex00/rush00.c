/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejshin <yejshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:46:38 by yejshin           #+#    #+#             */
/*   Updated: 2023/08/27 15:01:59 by yejshin          ###   ########.fr       */
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
			ft_putchar(edge);
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
		if (line == 1 || line == y)
			print_letter(x, 'o', '-');
		else
			print_letter(x, '|', ' ');
		line++;
		ft_putchar('\n');
	}
}
