#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 success
 */

void more_numbers(void)
{
	int c;
	int i;

	i = 0;
	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
			_putchar(c);
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
