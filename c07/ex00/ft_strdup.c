/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:27:35 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/11 21:40:45 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		src_size;
	int		i;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	new_str = (char *)malloc((src_size + 1) * sizeof(char));
	if (new_str == 0)
		return (0);
	i = -1;
	while (++i < src_size)
	{
		new_str[i] = src[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
