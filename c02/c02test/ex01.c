
// c02 test code - made by kyungjle

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);
void hexDump(char *dest, void *addr, int len);
void fill_str(char *dest, int size);

int main(void)
{
	char *str = "asdf";
	char *dest = malloc(10 * sizeof(char));

	fill_str(dest, 10);
	printf("%s %s\n", str, strncpy(dest, str, 3));
	hexDump("\0", dest, 10);
	printf("\n\n");

    printf("\n-%s-\n", dest);

	fill_str(dest, 10);
	printf("%s %s\n", str, ft_strncpy(dest, str, 3));
	hexDump("\0", dest, 10);
	printf("\n\n");

    printf("\n-%s-\n", dest);

	printf("================\n");
	
	fill_str(dest, 10);
	printf("%s %s\n", str, strncpy(dest, str, 10));
	hexDump("\0", dest, 10);
	printf("\n\n");
    printf("\n-%s-\n", dest);

	fill_str(dest, 10);
	printf("%s %s\n", str, ft_strncpy(dest, str, 10));
	hexDump("\0", dest, 10);
    printf("\n-%s-\n", dest);

}


void fill_str(char *dest, int size)
{
	char *str = "kyungjle";
	for (int i=0; i<size; i++)
	{
		dest[i] = str[i % 8];
	}
}

/* code from https://gist.github.com/domnikl/af00cc154e3da1c5d965 */
void hexDump(char *desc, void *addr, int len)
{
    int i;
    unsigned char buff[17];
    unsigned char *pc = (unsigned char*)addr;

    // Output description if given.
    if (desc != NULL)
        printf ("%s:\n", desc);

    // Process every byte in the data.
    for (i = 0; i < len; i++) {
        // Multiple of 16 means new line (with line offset).

        if ((i % 16) == 0) {
            // Just don't print ASCII for the zeroth line.
            if (i != 0)
                printf("  %s\n", buff);

            // Output the offset.
            printf("  %04x ", i);
        }

        // Now the hex code for the specific character.
        printf(" %02x", pc[i]);

        // And store a printable ASCII character for later.
        if ((pc[i] < 0x20) || (pc[i] > 0x7e)) {
            buff[i % 16] = '.';
        } else {
            buff[i % 16] = pc[i];
        }

        buff[(i % 16) + 1] = '\0';
    }

    // Pad out last line if not exactly 16 characters.
    while ((i % 16) != 0) {
        printf("   ");
        i++;
    }

    // And print the final ASCII bit.
    printf("  %s\n", buff);
}
