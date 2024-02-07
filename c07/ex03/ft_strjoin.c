/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:16:57 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/12 19:57:46 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	get_str_len(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	add_str(int size, char **strs, char *sep, char *string)
{
	int	string_i;
	int	strs_i;
	int	str_i;
	int	str_size;
	int	sep_size;

	string_i = 0;
	sep_size = get_str_len(sep);
	strs_i = 0;
	while (strs_i < size)
	{
		str_size = get_str_len(strs[strs_i]);
		str_i = 0;
		while (str_i < str_size)
			string[string_i++] = strs[strs_i][str_i++];
		str_i = 0;
		while ((str_i < sep_size) && (strs_i < size - 1))
			string[string_i++] = sep[str_i++];
		strs_i++;
	}
	string[string_i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		string_size;
	int		strs_i;

	if (size == 0)
	{
		string = (char *) malloc(sizeof(char));
		return (string);
	}
	string_size = 0;
	strs_i = 0;
	while (strs_i < size)
		string_size += get_str_len(strs[strs_i++]);
	string_size += (size - 1) * get_str_len(sep);
	string = (char *) malloc((string_size + 1) * sizeof(char));
	add_str(size, strs, sep, string);
	return (string);
}
