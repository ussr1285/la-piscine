/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:32:57 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/10 13:01:54 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

extern int	ft_strlen(char *str);
extern void	ft_putstr(char *str);
extern void	ft_putnbr(int nb);
extern int	ft_atoi(char *str);
extern void	ft_putnbr_base(int nbr, char *base);
extern int	ft_atoi_base(char *str, char *base);

/*
// ex05 v3
int main()
{ 
	char test[] = "2147483647adssadasff55465adflksdflkklsdf";
	// char test[] = " \n  \v  \t \f \r -++---2147483647adssadasff55465adflksdflkklsdf"; 
	// char test[] = " \n  \v  \t \f \r -++--2147483648adssadasff55465adflksdflkklsdf"; 
	// char test[] = " \n  \v  \t \f \r -++-5 5 2adssadasff55465adflksdflkklsdf";
	// char test[] = "";
	// char test[] = "afdfas";
	// char test[] = "0";
	// char test[] = "123456789";
	// char test[] = "0123456789";

	// "    505sdfsf2356fasdsad"; // // -2147483648
	// printf("%d\n", atoi(test)); // 진짜 atoi랑은 좀 다른 듯. 
	printf("%d\n", ft_atoi_base(test, "0123456789"));
	return (0);
}
*/

/* ex05 v2
int main()
{
	char *hexa = "0123456789ABCDEF";
	printf("%d\n", ft_atoi_base("0", hexa));
	printf("%d\n", ft_atoi_base("FF", hexa));
	printf("%d\n", ft_atoi_base("    ++---FlF", hexa));
	printf("%d\n", ft_atoi_base("		---Z", hexa));
	printf("%d\n", ft_atoi_base("		---FF F", hexa));
}
*/

/* ex05
int main()
{
	// char test[] = "7fffffff"; //  // "  505sdfsf2356fasdsad";
	char test[] = "-80000000";
	printf("%d\n", ft_atoi_base(test, "0123456789abcdef"));
	return (0);
}
*/

/* ex04
	for(int i = -1000; i <= 1000; i++)
	{
		ft_putnbr_base(i, "0123456789abcdef");
		write(1, "\n", 1);
	}
	ft_putnbr_base(2147483647, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	write(1, "\n", 1);
	return (0);
*/

/* // ex03
int main()
{ 
	char test[] = "2147483647adssadasff55465adflksdflkklsdf";
	// char test[] = " \n  \v  \t \f \r -++---2147483647adssadasff55465adflksdflkklsdf"; 
	// char test[] = " \n  \v  \t \f \r -++--2147483648adssadasff55465adflksdflkklsdf"; 
	// char test[] = " \n  \v  \t \f \r -++-3 5 2adssadasff55465adflksdflkklsdf";
	// char test[] = "";
	// char test[] = "afdfas";
	// char test[] = "0";
	// char test[] = "123456789";
	// char test[] = "0123456789";
	// char test[] = "---1325632167";
	// "    505sdfsf2356fasdsad"; // // -2147483648
	// printf("%d\n", atoi(test)); // 진짜 atoi랑은 좀 다른 듯. 
	printf("%d\n", ft_atoi(test));
	return (0);
}
*/

/*
// ex02
int main()
{
	for(int i=-100; i<=100; i++)
	{
		ft_putnbr(i);
		printf("\n");
	}
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
}
*/

/*
// ex01
int main()
{
	ft_putstr("abvcdfafdas\nsdfdafdafad!@#@");
}
*/

/*
// ex00
int main()
{
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen("0123456789"));
}
*/
