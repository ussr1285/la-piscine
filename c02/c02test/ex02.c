
// c02 test code - made by kyungjle

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	printf("1 %d\n", ft_str_is_alpha("asdjljakdsjJWJOEHIRBIHWBEKL"));
	printf("0 %d\n", ft_str_is_alpha("HWBEKLAS AKJSHKDHAK"));
	printf("1 %d\n", ft_str_is_alpha(""));
	printf("0 %d\n", ft_str_is_alpha("asd_jljakdsjJWJOEHIRBIHWBEKL"));
	printf("0 %d\n", ft_str_is_alpha("a123kdsjJWJOEHIRBIHWBEKL"));
	printf("0 %d\n", ft_str_is_alpha("asdjljakds\200 WJOEHIRBIHWBEKL"));
}
