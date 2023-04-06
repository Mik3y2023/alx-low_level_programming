#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = 0;
	int y = 0;
	int s = size * size;

	while (i < s)
	{
		x += a[i];
		i += size + 1;
	}
	i = size - 1;
	while (i < s - 1)
	{
		y += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", x, y);
}

