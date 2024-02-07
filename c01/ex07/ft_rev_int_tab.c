/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:16:14 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/28 17:31:51 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	front;
	int	back;
	int	temp;

	front = 0;
	back = size - 1;
	while (front < (size / 2))
	{
		temp = tab[front];
		tab[front++] = tab[back];
		tab[back--] = temp;
	}
}
