
// c03 test by kyungjle

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src);
int main(void)
{
	char *dest = malloc(10 * sizeof(char));
	char *src = "asdf";

	strcpy(dest, "bbb");
	printf("%p %s | %s\n", dest, dest, strcat(dest, src));	
	
	strcpy(dest, "bbb");
	printf("%p %s | %s\n", dest, dest, ft_strcat(dest, src));	
}
