#include "main.h"

/**
 * get_endianness - function that chechs for sequence of bytes of a word
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int s = 1;
	char *a = (char *)&s;

	if (*a)
		return (1);
	else
		return (0);
}
