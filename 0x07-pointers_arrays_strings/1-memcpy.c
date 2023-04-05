#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we copy to
 * @src: what to copy
 * @n: n bytes of @src
 *
 * Return: Pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char dest_arr[100];

	for (i = 0; i < n; i++)
		dest_arr[i] = src[i];

	for (i = 0; i < n; i++)
		dest[i] = dest_arr[i];

	return (dest);
}
