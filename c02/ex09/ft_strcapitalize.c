/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:59:01 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 11:20:37 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_word;

	is_first_word = 1;
	i = -1;
	while (str[++i] != '\0')
	{
		if ((is_first_word == 1) && (str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (is_first_word == 0)
				str[i] += 32;
			is_first_word = 0;
		}
		else if (str[i] >= 97 && str[i] <= 122)
			is_first_word = 0;
		else if (str[i] >= 48 && str[i] <= 57)
			is_first_word = 0;
		else
			is_first_word = 1;
	}
	return (str);
}
