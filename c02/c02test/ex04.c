
// c02 test code - made by kyungjle

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	printf("1 %d\n", ft_str_is_lowercase("asdfkjldfj"));
	printf("1 %d\n", ft_str_is_lowercase(""));
	printf("0 %d\n", ft_str_is_lowercase("Asdfkjldfj"));
	printf("0 %d\n", ft_str_is_lowercase("asdfki jldfj"));
	printf("0 %d\n", ft_str_is_lowercase("asdfi1kjldfj"));
}
