
// c02 test code - made by kyungjle

#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	printf("1 %d\n", ft_str_is_numeric(""));
	printf("0 %d\n", ft_str_is_numeric("123 "));
	printf("0 %d\n", ft_str_is_numeric("a123"));
	printf("1 %d\n", ft_str_is_numeric("12355123"));
	printf("0 %d\n", ft_str_is_numeric("-123809"));
	printf("0 %d\n", ft_str_is_numeric("jdAASD123"));
}
