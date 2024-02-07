/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:28:13 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 16:18:41 by minjaech         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	size_find_str;
	unsigned int	i;
	unsigned int	find_gauge;

	size_find_str = get_str_size(to_find);
	if (size_find_str == 0)
		return (str);
	find_gauge = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[find_gauge])
			find_gauge++;
		else
			find_gauge = 0;
		if (find_gauge == size_find_str)
			return (str + (i - (find_gauge - 1)));
		i++;
	}
	return (0);
}
