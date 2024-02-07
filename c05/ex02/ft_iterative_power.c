/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:48:39 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/08 16:40:22 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	i = 0;
	while (++i <= power)
	{
		result *= nb;
	}
	return (result);
}
