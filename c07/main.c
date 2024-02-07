#include<stdio.h>
#include<string.h>
#include<stdlib.h>

extern char	*ft_strdup(char *src);
extern int	*ft_range(int min, int max);
extern int	ft_ultimate_range(int **range, int min, int max);
extern char	*ft_strjoin(int size, char **strs, char *sep);
extern char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
extern char	**ft_split(char *str, char *charset);


/* ex05
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
*/

/* ex04 v3
int main()
{
	char test[] = "--";
	printf("%s\n", ft_convert_base(test, "0123456789", "0123456789ABCDEF"));
}
*/

///*
// ex04 v2
int main()
{
	char test[] = "2147483647adssadasff55465adflksdflkklsdf";
	char test2[] = "7FFFFFFFadssadasff55465adflksdflkklsdf";

	// char test[] = " \n  \v  \t \f \r -++---2147483647adssadasff55465adflksdflkklsdf";
	// char test2[] = " \n  \v  \t \f \r -++---7FFFFFFFadssadasff55465adflksdflkklsdf";

	// char test[] = " \n  \v  \t \f \r -++--2147483648adssadasff55465adflksdflkklsdf";
	// char test2[] = " \n  \v  \t \f \r -++--80000000adssadasff55465adflksdflkklsdf";

	// char test[] = " \n  \v  \t \f \r -++-5 5 2adssadasff55465adflksdflkklsdf";
	// char test2[] = " \n  \v  \t \f \r -++-5 5 2adssadasff55465adflksdflkklsdf";

	// char test[] = " \n  \v  \t \f \r -++- 5 5 2adssadasff55465adflksdflkklsdf";
	// char test2[] = " \n  \v  \t \f \r -++- 5 5 2adssadasff55465adflksdflkklsdf";

	// char test[] = " \n  \v  \t \f \r -++ -5 5 2adssadasff55465adflksdflkklsdf";
	// char test2[] = " \n  \v  \t \f \r -++ -5 5 2adssadasff55465adflksdflkklsdf";

	// char test[] = "--";
	// char test2[] = "--";

	// char test[] = "9";
	// char test2[] = "F";

	// char test[] = "720378A";
	// char test2[] = "AFDFAS";

	// char test[] = "\240\200\240";
	// char test2[] = "\240\200\240";

	// char test[] = "0";
	// char test2[] = "0";

	// char test[] = "43981";
	// char test2[] = "ABCD";

	// char test[] = "65535";
	// char test2[] = "FFFF";

	// char test[] = "- 5";
	// char test2[] = "- 5";

	// char test[] = "--";
	// char test2[] = "--";

	char *p_test;
	char *p_test2;
	
	p_test = ft_convert_base(test, "0123456789", "0123456");
	p_test2 = ft_convert_base(test2, "0123456789", "0123456");

	printf("real atoi: %d\n", atoi(test));
	printf("real atoi: %d\n", atoi(test2));
	// printf("test: %s\n", ft_convert_base("-- ", "0123456789", "0123456"));

	printf("%s\n", ft_convert_base(test, "0123456789", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base(test2, "0123456789ABCDEF", "0123456789"));

	printf("%s\n", ft_convert_base(test, "0123456789", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base(test2, "0123456789ABCDEF", "0123456789"));

	printf("%s\n", ft_convert_base(test, "0123456789", "abcdefghij"));
	printf("%s\n", ft_convert_base(test2, "0123456789ABCDEF", "abcdefghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "01"));
	printf("%s\n", ft_convert_base(test2, "0123456789ABCDEF", "01"));
	
	printf("%s\n", ft_convert_base(test, "0123456789", "\200\240"));
	printf("%s\n", ft_convert_base(test2, "0123456789ABCDEF", "\200\240"));

	printf("%s\n", ft_convert_base(test, "\200\240", "0123456789"));
	printf("%s\n", ft_convert_base(test2, "\200\240", "0123456789ABCDEF"));


	printf("%s\n", ft_convert_base(test, "0123456789", "\2001"));
	printf("%s\n", ft_convert_base(test2, "0123456789ABCDEF", "\2001"));
	printf("%s\n", ft_convert_base(test, "\2001", "0123456789"));
	printf("%s\n", ft_convert_base(test2, "\2001", "0123456789ABCDEF"));


	printf("%s\n", ft_convert_base(test, "", "0123456789"));
	printf("%s\n", ft_convert_base(test, "0123456789", ""));
	printf("%s\n", ft_convert_base(test, "", ""));
	printf("%s\n", ft_convert_base(test, "0123456789", "0"));
	printf("%s\n", ft_convert_base(test, "0123456789", "2"));
	printf("%s\n", ft_convert_base(test, "0123456789", "00123456789"));
	printf("%s\n", ft_convert_base(test, "0123456789", "01234567899"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc+defghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc-defghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc\ndefghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc\rdefghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc\tdefghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc\fdefghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc\vefghij"));
	printf("%s\n", ft_convert_base(test, "0123456789", "abc efghij"));
	return (0);
}
//*/

/* ex04
int	main()
{
	printf("%s\n", ft_convert_base("255", "0123456789", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base("FF", "0123456789ABCDEF", "0123456789"));
	printf("%s\n", ft_convert_base("1024", "0123456789", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base("FF", "0123456789ABCDEF", "0123456789"));
	printf("%s\n", ft_convert_base("-1", "0123456789", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base("-1", "0123456789ABCDEF", "0123456789"));
	printf("%s\n", ft_convert_base("0", "0123456789", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base("0", "0123456789ABCDEF", "0123456789"));
	return (0);
}
*/

/* ex03 v2
int	main()
{
	char **strings = (char **) malloc(sizeof(char *) * 6);
	for(int i=0; i<6; i++)
	{
		strings[i] = (char *) malloc(sizeof(char) * 10);
	}
	strcpy(strings[0], "lol");
	strcpy(strings[1], "pouic");
	strcpy(strings[2], "");
	strcpy(strings[3], "");
	strcpy(strings[4], "youpiiii");
	strcpy(strings[5], "");
	printf("%s\n", ft_strjoin(6, strings, "1234"));
	return (0);
}
*/

/* ex03
int	main()
{
	char **strings = (char **) malloc(sizeof(char *) * 5);
	for(int i=0; i<5; i++)
	{
		strings[i] = (char *) malloc(sizeof(char) * 5);
	}
	strcpy(strings[0], "123");
	strcpy(strings[1], "456");
	strcpy(strings[2], "");
	strcpy(strings[3], "4");
	strcpy(strings[4], "789");
	printf("%s\n", ft_strjoin(5, strings, ",."));
	return (0);
}
*/

/* ex02
int main()
{
	int min = -100;
	int max = 100;
	int *range;

	printf("%d\n", ft_ultimate_range(&range, min, max));
	min = 0;

	for(int i=0; i< 210; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}
*/

/* ex01 v2
int main()
{
	int min = 3;
	int max = 1;
	int *test;

	test = ft_range(min, max);
	printf("%p", test);
	return (0);
}
*/

/* ex01
int main()
{
	int min = -100;
	int max = 100;
	int *test;

	test = ft_range(min, max);
	for(int i=0; i< 210; i++)
	{
		printf("%d ", test[i]);
	}
	return (0);
}
*/

/* ex00
int main()
{
	char *test[2] = {"dada test!", ""};

	for(int i = 0; i < 2; i++)
	{
		printf("%d: %s | %s | %s\n", i, test[i], strdup(test[i]), ft_strdup(test[i]));
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 11; j++)
		{
			printf("%d: %d | %d | %d\n", i, test[i][j], strdup(test[i])[j], ft_strdup(test[i])[j]);
		}

	}

	return (0);
}
*/