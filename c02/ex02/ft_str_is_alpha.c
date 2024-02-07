/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:44:33 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 11:19:33 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_rom;
	int	i;
	int	logic1;
	int	logic2;

	is_rom = 1;
	i = -1;
	while (str[++i] != '\0')
	{
		logic1 = (str[i] >= 65 && str[i] <= 90);
		logic2 = (str[i] >= 97 && str[i] <= 122);
		if (!(logic1 || logic2))
		{
			is_rom = 0;
			break ;
		}
	}
	if (is_rom)
		return (1);
	else
		return (0);
}
