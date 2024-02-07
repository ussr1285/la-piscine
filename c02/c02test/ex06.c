
// c02 test code - made by kyungjle

#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	for (int i=0; i<255; i++)
	{
		char chr[] = {i};
		printf("(%s) %d : ", chr, i); 
		printf("%d", ft_str_is_printable(chr));
		printf("\n");
	}
}
