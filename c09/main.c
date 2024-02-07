#include<stdio.h>
#include<string.h>
#include<stdlib.h>

extern char	**ft_split(char *str, char *charset);
extern int	ft_strcmp(char *s1, char *s2);
extern void	ft_putchar(char c);
extern void	ft_putstr(char *str);
extern int	ft_strlen(char *str);
extern void	ft_swap(int *a, int *b);

///* ex02
int main()
{
	char **test_str = ft_split(".,.,.012,,345,,678.,.,.", ",.");

	for(int i=0; i<4; i++)
	{
		printf("%s\n", test_str[i]);
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
			printf("%c", test_str[i][j]);
		printf("\n");
	}
	return (0);
}
//*/

/* ex00
int main()
{
	char string[] = "\200\201"; 
	char string2[] = "\200";

	printf("%d\n", strcmp(string, string2));
	printf("%d\n", ft_strcmp(string, string2));
}
*/
