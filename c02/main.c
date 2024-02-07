/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:32:57 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/09 15:49:41 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>


extern char	*ft_strcpy(char *dest, char *src);
extern char	*ft_strncpy(char *dest, char *src, unsigned int n);
extern	int	ft_str_is_alpha(char *str);
extern	int	ft_str_is_numeric(char *str);
extern	int	ft_str_is_lowercase(char *str);
extern	int	ft_str_is_uppercase(char *str);
extern	int	ft_str_is_printable(char *str);
extern	char	*ft_strupcase(char *str);
extern	char	*ft_strlowcase(char *str);
extern	char	*ft_strcapitalize(char *str);
extern	unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
extern	void	ft_putstr_non_printable(char *str);
extern	void	*ft_print_memory(void *addr, unsigned int size);

int main()
{
	char string[] = "Coucou\ntu vas bien ?";

	for(int i=0; i<32; i++)
	{
		string[6] = i;
		ft_putstr_non_printable(string);
		printf("\n");
		// printf("%x\n", i);
	}

	for(int i=127; i<=255; i++)
	{
		string[6] = i;
		ft_putstr_non_printable(string);
		printf("\n");
		// printf("%x\n", i);
	}
	ft_putstr_non_printable("\200");
	return (0);
}

/* ex12 v2
	unsigned char str[256];
	for (int i = 0; i < 256; i++)
		str[i] = i;
	ft_print_memory((void *)str, 256);
	for (int i = 0; i < 20; i++)
	ft_print_memory((void *)str, i);
*/

/* ex12
	ft_print_memory("Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0",92);
*/

	/* test
	long	num2 = 5;
	long	num1 = (long)&num2;
	char	test[10];
	
	char_to_hex('B', test);
	char_to_hex('A', test+2);
	test[4] = '\0';
	
	printf("%c %c \n", test[0], test[1]);
	printf("%s\n", test);
	printf("%d\n", 'B');
	*/

	// printf("%c", 10 + 55);
	// "Bonjour les amin ches...c. est fo u.tout.ce qu on peut faire avec. ..print_memory.. ..lol.lol. ."

	// printf("%ld\n", num1);
	// printf("%lx\n", num1);
	// printf("%p\n", &num2);
	

	/* ex11
	char string[] = "Coucou\ntu vas bien ?";

	for(int i=0; i<32; i++)
	{
		string[6] = i;
		ft_putstr_non_printable(string);
		printf("\n");
		// printf("%x\n", i);
	}

	for(int i=127; i<=255; i++)
	{
		string[6] = i;
		ft_putstr_non_printable(string);
		printf("\n");
		// printf("%x\n", i);
	}
	*/
	/*
	char str[] = "\xff";
	printf("%d\n", '\xff');
	ft_putstr_non_printable(str);
	printf("\n\n\n");
	*/

/*
	char string[] = "Coucou\ntu vas bien ?";
	string[6] = '\0';
	ft_putstr_non_printable(string);
	printf("\n");
*/
/*
	ft_putstr_non_printable("asdfa asdf");
	printf("\n");
	ft_putstr_non_printable("as\ndfa\200 asdf\x61");
	printf("\n");
*/

	
	/*
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
	*/
	/*
	int	i;
	
	i = -1;
	while(++i < 32)
	{
		printf("%x ", i);
	}
	printf("\n%x", '\n');
	printf("\n%c", '0'+49);
	*/

/* ex10 테스트
char	s1[] = "Totfd";
char	s2[10];
char	str1[] = "Totfd";
char	str2[10];
char	test;

printf("%lu\n", strlcpy(s2, s1, 5));
printf("%u\n\n", ft_strlcpy(str2, str1, 5));

for (int i = 0; i < 10; i++){
	test = s2[i];
	write(1, &test, 1);
}
printf("\n");

for (int i = 0; i < 10; i++){
	test = str2[i];
	write(1, &test, 1);
}
printf("\n");
printf("\n%s\n%s", s2, str2);
return (0);
*/

/* ex09 ㅌㅔ스트
	char string[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(string));
*/



	/* ex01 테스트
	char s1[] = "Hello";
    char s2[10];
	char str1[] = "Hello";
	char str2[10];

	printf("%s %s\n", strncpy(s2, s1, 6), s2);
	printf("%s %s\n", ft_strncpy(str2, str1, 6), str2);

	for(int i=0; i<6; i++){
		printf("%c", s2[i]);
	}
	printf("\n");
	for(int i=0; i<6; i++){
		printf("%c", str2[i]);
	}
	*/


	/* ex00
	char s1[] = "Hello";
    char s2[10];
	char str1[] = "Hello";
	char str2[10];
	
    printf("%s %s\n", strcpy(s2, s1), s2);
	printf("%s %s\n", ft_strcpy(str2, str1), str2);

	for(int i=0; i<6; i++){
		printf("%c", s2[i]);
	}
	printf("\n");
	for(int i=0; i<6; i++){
		printf("%c", str2[i]);
	}
	*/