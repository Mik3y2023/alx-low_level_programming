#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly alloacted space with a copy of arg
 * @str: the string to copy
 *
 * Return: pointer to array or null
 */

char *_strdup(char *str)
{
	char *n;
	int a;
	int b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	a++;
	n = malloc(sizeof(*str) * a);
	if (n == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		n[b] = str[b];
		b++;
	}
	return (n);
}
