#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

extern void ft_foreach(int *tab, int length, void(*f)(int));
extern int	*ft_map(int *tab, int length, int(*f)(int));
extern int ft_any(char **tab, int(*f)(char*));

void	recursive_putnbr(long nb)
{
	char	printable_c;

	if (nb == 0)
		return ;
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		recursive_putnbr(nb);
	}
	else
	{
		recursive_putnbr(nb / 10);
		printable_c = (nb % 10) + '0';
		write(1, &printable_c, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		recursive_putnbr(nb);
	}
}

int	ft_abs_test(int num) // 최대 최소 처리 안함. 걍  테스트용
{
	if(num < 0)
		return (-num);
	else
		return (num);
}

int	get_str_len(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

///* ex02
int	main()
{
	char **strings = (char **) malloc(sizeof(char *) * 6);
	for(int i=0; i<6; i++)
	{
		strings[i] = (char *) malloc(sizeof(char) * 10);
	}
	// strcpy(strings[0], "lol");
	// strcpy(strings[1], "pouic");
	// strcpy(strings[2], "");
	// strcpy(strings[3], "");
	// strcpy(strings[4], "youpiiii");
	// strcpy(strings[5], "");

	strcpy(strings[0], "");
	strcpy(strings[1], "");
	strcpy(strings[2], "");
	strcpy(strings[3], "");
	strcpy(strings[4], "");
	strcpy(strings[5], "");

	printf("%d\n",ft_any(strings, get_str_len));
	return (0);
}


//*/

/* ex01
int main()
{
	int	arr[100];
	int	*arr_map;
	int	i;

	i = -1;
	while(++i < 100)
	{
		arr[i] = i - 50;
	}
	arr_map = ft_map(arr, 100, ft_abs_test);
	i = -1;
	while(++i < 100)
	{
		printf("%d ", arr_map[i]);
	}
	return (0);
}
*/

/* ex00
int main()
{
	int	arr[100];
	int	i;

	i = -1;
	while(++i < 100)
	{
		arr[i] = i - 50;
	}
	ft_foreach(arr, 100, ft_putnbr);
	return (0);
}
*/