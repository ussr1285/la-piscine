/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:18:12 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/29 18:53:06 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

extern	void	ft_ft(int *nbr);
extern	void	ft_ultimate_ft(int *********nbr);
extern	void	ft_swap(int *a, int *b);
extern	void	ft_div_mod(int a, int b, int *div, int *mod);
extern	void	ft_ultimate_div_mod(int *a, int *b);
extern	void	ft_putstr(char *str);
extern	int	ft_strlen(char *str);
extern	void	ft_rev_int_tab(int *tab, int size);
extern	void	ft_sort_int_tab(int *tab, int size);
extern	void	ft_sort_int_tab(int *tab, int size);

int	main()
{
	int arr[13] = {5, 9, 4, 500, 3, 2, 0, 7, 6, 10, 10, 1, 8};
	int	i;

	ft_sort_int_tab(arr, 13);
	i = 0;
	while (i < 13)
	{
		printf("%d ", arr[i++]);		
	}
	return (0);
}