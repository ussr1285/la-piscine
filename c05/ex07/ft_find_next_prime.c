/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:21:58 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/08 16:42:23 by minjaech         ###   ########.fr       */
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
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	max;

	max = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i <= max)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		nb = 2;
	i = nb;
	while (1)
	{
		if (ft_is_prime(i))
			break ;
		i++;
	}
	return (i);
}
