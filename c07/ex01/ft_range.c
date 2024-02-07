/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:27:28 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/10 16:09:15 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int		*new_arr;
	int		i;
	int		arr_i;

	if (min >= max)
		return (0);
	new_arr = (int *)malloc((max - min) * sizeof(int));
	if (new_arr == 0)
		return (0);
	arr_i = 0;
	i = min;
	while (i < max)
	{
		new_arr[arr_i++] = i++;
	}
	return (new_arr);
}
