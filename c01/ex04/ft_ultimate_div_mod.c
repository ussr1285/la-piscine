/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:04:15 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/28 17:08:32 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	value;
	int	remainder;

	value = *a / *b;
	remainder = *a % *b;
	*a = value;
	*b = remainder;
}
