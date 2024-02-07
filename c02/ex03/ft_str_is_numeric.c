/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:57:52 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 11:19:41 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_dig;
	int	i;

	is_dig = 1;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			is_dig = 0;
			break ;
		}
	}
	if (is_dig)
		return (1);
	else
		return (0);
}
