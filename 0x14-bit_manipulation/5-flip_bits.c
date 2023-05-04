#include "main.h"

/**
 * flip_bits - function that returns number of bits
 * to flip to get one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, c = 0;
	unsigned long int b = sizeof(unsigned long int) * 8;

	for (a = 0 ; a < b ; a++)
	{
		if ((m & 1) != (n & 1))
			c += 1;
		n = n >> 1;
		m = m >> 1;
	}

	return (c);
}
