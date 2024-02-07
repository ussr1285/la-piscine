
// c03 test by kyungjle

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[10] = "\200";
	char str2[10] = "\0";
	printf("%d %d \n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));

	strcpy(str1, "asdf\0asdf");
	strcpy(str2, "asdf");
	printf("%d %d \n", strncmp(str1, str2, 3), ft_strncmp(str1, str2, 3));

	strcpy(str1, "asdf\0asdf");
	strcpy(str2, "asdfff");
	printf("%d %d \n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));

	strcpy(str1, "asdf\0asdf");
	strcpy(str2, "asdfff");
	printf("%d %d \n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));
}
