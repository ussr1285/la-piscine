/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:08:26 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 11:20:13 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_up;
	int	i;

	is_up = 1;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			is_up = 0;
			break ;
		}
	}
	if (is_up)
		return (1);
	else
		return (0);
}
