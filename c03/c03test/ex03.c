#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
int main(void)
{
	char *dest = malloc(10 * sizeof(char));
	char *src = "asdf";

	strcpy(dest, "bbb");
	printf("%p %s | %s\n", dest, dest, strncat(dest, src, 2));
	strcpy(dest, "bbb");
	printf("%p %s | %s\n", dest, dest, ft_strncat(dest, src, 2));
}
