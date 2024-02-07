/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:20:22 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/12 23:58:59 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	get_str_len(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s_arr;
	int					arr_size;
	int					ac_i;

	arr_size = (ac + 1) * sizeof(struct s_stock_str);
	s_arr = (struct s_stock_str *) malloc(arr_size);
	if (s_arr == 0)
		return (0);
	ac_i = -1;
	while (++ac_i < ac)
	{
		s_arr[ac_i].size = get_str_len(av[ac_i]);
		s_arr[ac_i].str = av[ac_i];
		s_arr[ac_i].copy = ft_strdup(av[ac_i]);
	}
	s_arr[ac_i].size = 0;
	s_arr[ac_i].str = 0;
	s_arr[ac_i].copy = 0;
	return (s_arr);
}
