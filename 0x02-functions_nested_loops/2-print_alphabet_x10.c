#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * return: 0 success
 */

void print_alphabet_x10(void)
{
	char i;
	int d;

	while (i >= 'a')
	{
		for (d = 0, d < 10, d++)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
