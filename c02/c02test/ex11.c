
// c02 test code - made by kyungjle

#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
	ft_putstr_non_printable("asdfa asdf");
	printf("\n");
	ft_putstr_non_printable("as\ndfa\200 asdf\x61");
	printf("\n");
}
