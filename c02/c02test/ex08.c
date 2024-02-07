
// c02 test code - made by kyungjle

#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[100] = "HELlo 123 world \n";
	printf("%s\n", str);
	printf("===============\n");
	printf("%s\n", ft_strlowcase(str));
}
