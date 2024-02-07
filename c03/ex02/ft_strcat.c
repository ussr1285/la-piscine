/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:36:10 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/04 21:03:20 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_str_size(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	src_i;
	unsigned int	new_str_size;

	dest_size = get_str_size(dest);
	src_size = get_str_size(src);
	new_str_size = dest_size + src_size;
	src_i = 0;
	while (dest_size < new_str_size)
	{
		dest[dest_size++] = src[src_i++];
	}
	dest[dest_size] = '\0';
	return (dest);
}
