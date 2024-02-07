/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:28:01 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/09 11:11:45 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	name_size;

	name_size = 0;
	while (argv[0][name_size] != '\0')
	{
		name_size++;
	}
	if (argc > 0)
		write(1, argv[0], name_size);
	write(1, "\n", 1);
	return (0);
}
