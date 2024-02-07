/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:46:14 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/27 17:41:16 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*to_string(char *string, int num1, int num2)
{	
	int	f1;
	int	f2;
	int	s1;
	int	s2;

	f1 = num1 / 10;
	f2 = num1 % 10;
	s1 = num2 / 10;
	s2 = num2 % 10;
	string[0] = f1 + 48;
	string[1] = f2 + 48;
	string[3] = s1 + 48;
	string[4] = s2 + 48;
	if (num1 == 98 && num2 == 99)
		write(1, string, 5);
	else
		write(1, string, 7);
	return (string);
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	string[7];

	string[2] = ' ';
	string[5] = ',';
	string[6] = ' ';
	num1 = -1;
	while (++num1 < 100)
	{
		num2 = num1;
		while (++num2 < 100)
		{
			if (num1 != num2)
				to_string(string, num1, num2);
		}
	}
}
