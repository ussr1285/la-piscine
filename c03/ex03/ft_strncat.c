/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:07:23 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/07 14:42:30 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_i;
	unsigned int	src_i;

	if (nb == 0)
		return (dest);
	dest_i = get_strlen(dest);
	src_i = 0;
	while (src_i < nb && src[src_i] != '\0')
		dest[dest_i++] = src[src_i++];
	dest[dest_i] = '\0';
	return (dest);
}
