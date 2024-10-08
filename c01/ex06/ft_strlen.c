/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:13:12 by minjaech          #+#    #+#             */
/*   Updated: 2023/08/28 17:31:34 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	str_size;

	str_size = 0;
	while (str[str_size] != '\0')
	{
		str_size++;
	}
	return (str_size);
}
