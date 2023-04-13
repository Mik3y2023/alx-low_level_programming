#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - is a function that allocates memory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return: pointer to the allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
