#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;

		for (; *n != '\0' && *h == *n; n++, h++)
			;

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}

