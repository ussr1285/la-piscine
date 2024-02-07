/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:32:45 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 17:41:27 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

void	ft_putstr(char *str)
{
	int	str_size;

	str_size = ft_strlen(str);
	write(1, str, str_size);
}
