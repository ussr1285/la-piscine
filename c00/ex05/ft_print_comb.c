/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:37:36 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/27 17:21:13 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	print_num(char *string, int i, int j, int k)
{
	int	size;

	size = 5;
	string[0] = i + 48;
	string[1] = j + 48;
	string[2] = k + 48;
	string[3] = ',';
	string[4] = ' ';
	if (i == 7 && j == 8 && k == 9)
	{
		write(1, string, 3);
		string[3] = '\0';
		string[4] = '\0';
	}
	else
		write(1, string, 5);
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;
	char	string[5];

	i = -1;
	while (i < 10)
	{
		j = ++i;
		while (j < 10)
		{
			k = ++j;
			while (++k < 10)
			{
				if (i != j && j != k && k != i)
				{
					print_num(string, i, j, k);
				}
			}
		}
	}
}
