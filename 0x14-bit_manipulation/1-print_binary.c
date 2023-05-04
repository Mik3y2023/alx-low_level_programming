#include "main.h"

/**
 * print_binary -function that prints the binary 
 * representation of a number
 * @n: number to print in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int x, c = 0;
	int y;

	for (x = 63 ; x >= 0 ; x--)
	{
		y = n >> x;

		if (y & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
