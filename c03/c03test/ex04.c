#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);
int main(void)
{
	char hay[] = "foo bar baz";
	char needle[10] = "";
	printf("%s\n", strstr(hay, needle));
	printf("%s\n", ft_strstr(hay, needle));

	strcpy(needle, "ba");
	printf("%s\n", strstr(hay, needle));
	printf("%s\n", ft_strstr(hay, needle));
}
