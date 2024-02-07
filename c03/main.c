/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:32:57 by minjaech          #+#    #+#             */
/*   Updated: 2023/09/13 17:26:48 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

extern int	ft_strcmp(char *s1, char *s2);
extern int	ft_strncmp(char *s1, char *s2, unsigned int n);
extern char	*ft_strcat(char *dest, char *src);
extern char	*ft_strncat(char *dest, char *src, unsigned int nb);
extern char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

/*
int main()
{
	char string[50] = "5678sdf,g,jdxcjxj,segj,jkefxd,h,erlkfdf"; 
	char string2[50] = "01234";
	char str[50] = "5678sdf,g,jdxcjxj,segj,jkefxd,h,erlkfdf"; 
	char str2[50] = "01234";
	
	printf("%s\n", strncat(string2, string, 20));
	for(int i = 0; i < 20; i++){
		printf("%c", string2[i]);
	}
	printf("\n");
	printf("%s\n", string2);
	printf("-------------------------\n");
	printf("%s\n", ft_strncat(str2, str, 20));
	for(int i = 0; i < 20; i++){
		printf("%c", str2[i]);
	}
	printf("\n");
	printf("%s\n", str2);
	return (0);
}
*/
/*
// ex05
	char 	string[20] = "4567";  // 45678456785678912345
	char	string2[11] = "0123";
	char	str[20] = "4567";
	char	str2[11] = "0123";
	int		size = 11;

	printf("%lu\n", strlcat(string2, string, size));
	printf("%s\n", string2);
	printf("-------------------------\n");
	printf("%u\n", ft_strlcat(str2, str, size));
	printf("%s\n", str2);
	return (0);
*/

/*
// ex04
	char string[20] = "01234560123456"; 
	char string2[11] = "0123456";
	char str[20] = "01234560123456";
	char str2[11] = "0123456";

	printf("%s\n", strstr(string2, string));
	printf("-------------------------\n");
	printf("%s\n", ft_strstr(str2, str));
	return (0);
*/


/*
// ex03 v2
	char string[50] = "5678\x00sdf,g,jdxcjxj,segj,jkefxd,h,erlkfdf"; 
	char string2[50] = "01234";
	char str[50] = "5678\x00sdf,g,jdxcjxj,segj,jkefxd,h,erlkfdf"; 
	char str2[50] = "01234";
	
	printf("%s\n", strncat(string2, string, 49));
	for(int i = 0; i < 20; i++){
		if(string2[i] == '\0')
			break;
		printf("%c", string2[i]);
	}
	printf("\n");
	printf("%s\n", string2);
	printf("-------------------------\n");
	printf("%s\n", ft_strncat(str2, str, 49));
	for(int i = 0; i < 20; i++){
		if(str2[i] == '\0')
			break;
		printf("%c", str2[i]);
	}
	printf("\n");
	printf("%s\n", str2);
*/

/*
// ex03
	char string[5] = "5678"; 
	char string2[11] = "01234";
	char str[5] = "5678"; 
	char str2[11] = "01234";

	printf("%s\n", strncat(string2, string, 5));
	printf("%s\n", string2);
	printf("-------------------------\n");
	printf("%s\n", ft_strncat(str2, str, 5));
	printf("%s\n", str2);
*/

/*
// ex02
	char string[5] = "23"; 
	char string2[11] = "01";
	char str[5] = "23"; 
	char str2[11] = "01";

	printf("%s\n", strcat(string2, string));
	printf("%s\n", string2);
	printf("\n-------------------------\n");
	printf("%s\n", ft_strcat(str2, str));
	printf("%s\n", str2);
*/

/*
// ex01 v3
	char string[] = "012"; 
	char string2[] = "0123456789";

	printf("%d\n", strncmp(string, string2, 3));
	printf("%d\n", ft_strncmp(string, string2, 3));
*/

/*
// ex01 v2
	char string[] = "012"; 
	char string2[] = "0123456789";

	printf("%d\n", strncmp(string, string2, 3));
	printf("%d\n", ft_strncmp(string, string2, 3));
*/

/*
// ex01
	char string[] = "0123456789"; 
	char string2[] = "0123456789";

	printf("%d\n", strncmp(string, string2, 5));
	printf("%d\n", ft_strncmp(string, string2, 5));
	return (0);

*/
///*

int main(){
	// ex00
	char string[] = "apc"; 
	char string2[] = "abc";

	printf("%d\n", strcmp(string, string2));
	printf("%d\n", ft_strcmp(string, string2));
}
//*/
