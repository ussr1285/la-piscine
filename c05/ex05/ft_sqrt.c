/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:51:01 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/08 16:41:25 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	lnb;

	lnb = (long) nb;
	if (lnb < 0)
		return (0);
	else if (lnb == 1)
		return (1);
	i = 2;
	while (i * i <= lnb)
	{
		if (i * i == lnb)
			return ((int) i);
		i++;
	}
	return (0);
}
