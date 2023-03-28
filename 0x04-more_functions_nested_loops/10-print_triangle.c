#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in an integer for size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j + 1 >= size - i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
