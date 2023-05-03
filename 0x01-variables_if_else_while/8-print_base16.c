#include <stdio.h>

/**
 * main - main function
 *
 * return: 0 on success, non-zero on failure
 */

int main(void)
{
	int c;

	for (c = 0 ; c < 16 ; c++)
	{
		if (c < 10)
		putchar(c + '0');
		else
		putchar(c - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
