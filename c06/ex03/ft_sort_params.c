/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:28:22 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/10 14:00:58 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned char	delete_negative(unsigned char c)
{
	if (c < 0)
		c *= -1;
	return (c);
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			c1 = delete_negative((unsigned char) s1[i]);
			c2 = delete_negative((unsigned char) s2[i]);
			return (c1 - c2);
		}
		i++;
	}
	c1 = delete_negative((unsigned char) s1[i]);
	c2 = delete_negative((unsigned char) s2[i]);
	if (c1 == '\0' && c2 == '\0')
		return (0);
	else if (c1 == '\0')
		return (-c2);
	else
		return (c1);
}

void	swap_str(char *argv[], int i, int j)
{
	char	*temp_str;

	temp_str = argv[i];
	argv[i] = argv[j];
	argv[j] = temp_str;
}

void	sort_argv(int argc, char *argv[], int i, int j)
{
	int	v;
	int	cmp_result;

	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			v = 0;
			while (1)
			{
				cmp_result = ft_strcmp(argv[i], argv[j]);
				if (cmp_result > 0)
				{
					swap_str(argv, i, j);
					break ;
				}
				else if (cmp_result < 0)
					break ;
				else if (argv[i][v] != '\0' && argv[j][v] != '\0')
					break ;
				v++;
			}
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	v_size;

	i = 0;
	j = 0;
	sort_argv(argc, argv, i, j);
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
