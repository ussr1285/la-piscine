/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:36:41 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/13 23:40:55 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*arr;
	int	i;

	arr = (int	*) malloc(length * sizeof(int));
	i = -1;
	while(++i < length)
	{
		arr[i] = f(tab[i]);
	}
	
	return (arr);
}
