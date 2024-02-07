/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:12:55 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 15:03:39 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_str_size(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_size;

	src_size = get_str_size(src);
	i = 0;
	if (size != 0)
	{
		while (i < size - 1)
		{
			if (src[i] == '\0')
				break ;
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}
