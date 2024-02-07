/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:00:13 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 11:19:48 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_low;
	int	i;

	is_low = 1;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			is_low = 0;
			break ;
		}
	}
	if (is_low)
		return (1);
	else
		return (0);
}
