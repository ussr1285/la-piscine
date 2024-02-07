
// c02 test code - made by kyungjle

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	printf("1 %d\n", ft_str_is_uppercase(""));
	printf("1 %d\n", ft_str_is_uppercase("ASDJDAJKHNVO"));
	printf("0 %d\n", ft_str_is_uppercase("asjkASHJKDH"));
	printf("0 %d\n", ft_str_is_uppercase("123AJDBJA"));
	printf("0 %d\n", ft_str_is_uppercase("_AJKHCIQ"));
	printf("0 %d\n", ft_str_is_uppercase("\\ALKSJDK"));
}
