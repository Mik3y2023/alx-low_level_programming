#include "main.h"

/**
 * is_prime - detects if an input number is a prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if n is a prime number and 0 if n is not a prime number
 */
int is_prime(unsigned int a, unsigned int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(a, b + 1));
}

/**
 * is_prime_number - detects if the input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_prime_number(int a)
{
	if (a == 0)
		return (0);
	if (a < 0)
		return (0);
	if (a == 1)
		return (0);
	return (is_prime(a, 2));
}
