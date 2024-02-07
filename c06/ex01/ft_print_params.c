/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:28:07 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/09 13:50:26 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	v_size;
	int	i;

	i = 0;
	while (++i < argc)
	{
		v_size = 0;
		while (argv[i][v_size] != '\0')
		{
			v_size++;
		}
		write(1, argv[i], v_size);
		write(1, "\n", 1);
	}
	return (0);
}
