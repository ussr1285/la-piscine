/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:50:04 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/09 13:44:19 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

extern int	ft_iterative_factorial(int nb);
extern int	ft_recursive_factorial(int nb);
extern int	ft_iterative_power(int nb, int power);
extern int	ft_recursive_power(int nb, int power);
extern int	ft_fibonacci(int index);
extern int	ft_sqrt(int nb);
extern int	ft_is_prime(int nb);
extern int	ft_find_next_prime(int nb);
extern int	ft_ten_queens_puzzle(void);


/* ex07
int main(){
	int i;

	for(i=-2; i<100; i++)
	{
		printf("%d %d, ", i, ft_find_next_prime(i));
	}    
	return 0;
}
*/

/* ex06
int main(){
	int i;

	for(i=-2; i<=100; i++)
	{
		if(ft_is_prime(i))
			printf("%d ", i);
	}    
	
	return 0;
}
*/

/* ex05
int main(){
	int i;

	for(i=-2; i<50; i++)
	{
		printf("%d %d\n", i, ft_sqrt(i));
	}    
	i = 100000000;
	printf("%d %d\n", i, ft_sqrt(i));
	return 0;
}
*/

/* ex04
int	main()
{
	for(int i = 0; i <= 30; i++)
	{
		printf("%d\n", ft_fibonacci(i));
	}
	return 0;
}
*/

/* ex03
int	main()
{
	printf("%d\n", ft_recursive_power(5, 10));
	printf("%d\n", ft_recursive_power(5, 2));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(2, -1));
	return 0;
}
*/

/* ex02

int	main()
{
	printf("%d\n", ft_iterative_power(5, 10));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(2, -1));
	return 0;
}
*/


/* // ex01

int	main()
{
	printf("%d\n", ft_recursive_factorial(11));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(-1));
	return 0;
}

*/

/* // ex00

int	main()
{
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-1));
	return 0;
}
*/