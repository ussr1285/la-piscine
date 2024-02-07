#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ft_stock_str.h"

extern struct s_stock_str *ft_strs_to_tab(int ac, char **av);
extern void ft_show_tab(struct s_stock_str *par);

/* ex05
int	main()
{
	char **strings = (char **) malloc(sizeof(char *) * 6);
	struct s_stock_str *s_arr;
	for(int i=0; i<6; i++)
	{
		strings[i] = (char *) malloc(sizeof(char) * 10);
	}
	strcpy(strings[0], "lol");
	strcpy(strings[1], "pouic");
	strcpy(strings[2], "");
	strcpy(strings[3], "");
	strcpy(strings[4], "youpiiii");
	strcpy(strings[5], "");
	s_arr = ft_strs_to_tab(6, strings);
	strcpy(s_arr[0].copy, "32x");
	ft_show_tab(s_arr);
	return (0);
}
*/

/* ex04
int	main()
{
	char **strings = (char **) malloc(sizeof(char *) * 6);
	for(int i=0; i<6; i++)
	{
		strings[i] = (char *) malloc(sizeof(char) * 10);
	}
	strcpy(strings[0], "lol");
	strcpy(strings[1], "pouic");
	strcpy(strings[2], "");
	strcpy(strings[3], "");
	strcpy(strings[4], "youpiiii");
	strcpy(strings[5], "");
	ft_strs_to_tab(6, strings);
	return (0);
}
*/

/* ex03
#include "ex03/ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;
	set_point(&point);
	printf("%d %d\n", point.x, point.y);
	return (0);
}

*/

/* ex02
#include "ex02/ft_abs.h"

int main()
{
	for(int i=-100; i<=100; i++)
	{
		printf("%d ", ABS(i));
	}
	printf("\n");
	return (0);
}
*/

/* ex01
#include "ex01/ft_boolean.h"
void ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
*/

/* ex00
#include "ex00/ft.h"
int main()
{
	return (0);
}
*/