#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[10];
	char dest2[10];
	char src[] = "adwhgsdbhxjk";
	printf("%s %lu\n", dest, strlcat(dest, src, 0));
	printf("%s %u\n", dest2, ft_strlcat(dest2, src, 0));
}
