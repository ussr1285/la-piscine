
// c02 test code - made by kyungjle

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void hexDump(char *dest, void *addr, int len);
void fill_str(char *dest, int size);

int main(void)
{
	char str[] = "asdfg";
	char *dest = malloc(100 * sizeof(char));
	
	fill_str(dest, 100);
	printf("%s %lu\n", dest, strlcpy(dest, str, 10));
	hexDump("\0", dest, 100);
	
	printf("\n\n\n");
	
	fill_str(dest, 100);
	printf("%s %u\n", dest, ft_strlcpy(dest, str, 10));
	hexDump("\0", dest, 100);
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

