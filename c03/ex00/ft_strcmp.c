/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:52:25 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 20:41:14 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
