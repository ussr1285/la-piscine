/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:01:10 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/05 17:06:17 by minjaech         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	src_i;
	unsigned int	dest_i;

	dest_size = get_str_size(dest);
	src_size = get_str_size(src);
	if (size == 0 || size < dest_size)
		return (src_size + size);
	src_i = 0;
	dest_i = dest_size;
	while (dest_i < size - 1 && src[src_i] != '\0')
	{
		dest[dest_i++] = src[src_i++];
	}
	dest[dest_i] = '\0';
	return (src_size + dest_size);
}
