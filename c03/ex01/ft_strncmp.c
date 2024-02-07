/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:25:55 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/06 20:41:24 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	dn(unsigned char c)
{
	if (c < 0)
		c *= -1;
	return (c);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (dn((unsigned char) s1[i]) - dn((unsigned char) s2[i]));
		}
		i++;
	}
	c1 = dn((unsigned char) s1[i]);
	c2 = dn((unsigned char) s2[i]);
	if (c1 == '\0' && c2 == '\0')
		return (0);
	else if (c1 == '\0' && i != n)
		return (-c2);
	else if (c2 == '\0' && i != n)
		return (c1);
	else
		return (0);
}
