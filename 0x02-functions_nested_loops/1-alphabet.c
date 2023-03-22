#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * return: Always 0 Success
 */

void print_alphabet(void);
{
	char c;
	for (c='a', c<='z', c++)
		putchar (c);
	return 0;
}
