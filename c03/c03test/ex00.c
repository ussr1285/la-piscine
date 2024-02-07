
// c03 test by kyungjle

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[10] = "\200";
	char str2[10] = "\0";
	printf("%d %d \n", strcmp(str1, str2), ft_strcmp(str1, str2));

	strcpy(str1, "asdf\0asdf");
	strcpy(str2, "asdf");
	printf("%d %d \n", strcmp(str1, str2), ft_strcmp(str1, str2));

	strcpy(str1, "asdfg");
	strcpy(str2, "asdfg");
	printf("%d %d \n", strcmp(str1, str2), ft_strcmp(str1, str2));

}
