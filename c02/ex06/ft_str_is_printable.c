/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:35:46 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 11:20:20 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	i;

	is_printable = 1;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			is_printable = 0;
			break ;
		}
	}
	if (is_printable)
		return (1);
	else
		return (0);
}
