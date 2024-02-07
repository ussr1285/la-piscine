/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:42:23 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/11 21:30:25 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	arr_i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = min;
	arr_i = 0;
	while (i < max)
	{
		range[0][arr_i++] = i++;
	}
	return (max - min);
}
