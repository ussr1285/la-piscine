
// c02 test code - made by kyungjle

#include <stdlib.h>
#include <stdio.h>

void fill_str(char *dest, int size);
void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char *dest = malloc(20 * sizeof(char));
	fill_str(dest, 10);
	int arr[5] = {1, 2, 3, 4, 5};
	char *str = "hello world";

	printf("\n\n\n%p %p\n", dest, ft_print_memory((void*) dest, 15));
}

void fill_str(char *dest, int size)
{
	char *str = "kyungjle";
	for (int i=0; i<size; i++)
	{
		dest[i] = str[i % 8];
	}
}
