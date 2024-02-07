/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:27:01 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:53 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_end_check(int n, char *string)
{
	int	i;
	int	is_end;

	is_end = 1;
	i = n;
	if (n == 1)
	{
		if (string[0] != '9')
			is_end = 0;
		return (is_end);
	}
	while (--i > 0)
	{
		if (!(string[n - 1] == '9' && string[i] - 1 == string[i - 1]))
			is_end = 0;
	}
	return (is_end);
}
// n == 3
// 123 124 125 ~ 129 13 ~ 19 234
void	recur_print(int n, char *string, int current_n, int start_num)
{
	int	is_end;

	if (start_num > 9)
		return ;
	if (current_n >= n)
		return ;
	string[current_n] = start_num + '0';
	if (current_n == n - 1)
	{
		write(1, string, n);
		is_end = is_end_check(n, string);
		if (!is_end)
			write(1, ", ", 2);
	}
	recur_print(n, string, current_n + 1, start_num + 1);
	recur_print(n, string, current_n, start_num + 1);
}

void	ft_print_combn(int n)
{
	char	string[10];

	recur_print(n, string, 0, 0);
}
