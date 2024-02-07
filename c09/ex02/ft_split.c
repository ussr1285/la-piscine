/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:29:41 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/13 01:31:03 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src, int *start_i, int *end_i)
{
	char	*new_str;
	int		i;
	int		src_i;

	new_str = (char *)malloc(((*end_i - *start_i) + 2) * sizeof(char));
	if (new_str == 0)
		return (0);
	src_i = *start_i - 1;
	i = 0;
	while (++src_i <= *end_i)
	{
		new_str[i++] = src[src_i];
	}
	new_str[i] = '\0';
	*start_i = -1;
	*end_i = -2;
	return (new_str);
}

int	anal_sep(char *sep, char c)
{
	int	i;

	i = -1;
	while (sep[++i] != '\0')
	{
		if (c == sep[i])
			return (i);
	}
	return (-1);
}

void	split_strings(char *str, char *charset, char **strings, int strings_i)
{
	int		str_i;
	int		is_sep;
	int		start_i;
	int		end_i;

	start_i = -1;
	end_i = -2;
	is_sep = 1;
	str_i = -1;
	while (str[++str_i] != '\0')
	{
		if (anal_sep(charset, str[str_i]) >= 0)
		{
			is_sep = 1;
			if (end_i >= start_i)
				strings[strings_i++] = ft_strdup(str, &start_i, &end_i);
			continue ;
		}
		if (is_sep == 1)
			start_i = str_i;
		end_i = str_i;
		is_sep = 0;
	}
	if (is_sep == 0)
		strings[strings_i++] = ft_strdup(str, &start_i, &end_i);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		strings_i;
	int		strings_size;
	int		is_sep;
	int		str_i;

	strings_i = 0;
	is_sep = 1;
	strings_size = 0;
	str_i = -1;
	while (str[++str_i] != '\0')
	{
		if (anal_sep(charset, str[str_i]) >= 0)
			is_sep = 1;
		else
		{
			if (is_sep == 1)
				strings_size++;
			is_sep = 0;
		}
	}
	strings = (char **) malloc((strings_size + 1) * sizeof(char *));
	split_strings(str, charset, strings, strings_i);
	strings[strings_size] = 0;
	return (strings);
}
