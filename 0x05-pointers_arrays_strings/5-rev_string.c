#include <stdio.h>
#include "main.h"

/**
 * rev_string - update value
 * @s: value to be evaluated.
 * Return: no return
 */

void rev_string(char *s)
{
	char z;
	int i, a, b;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;

	for (i = 0; i < a / 2; i++)
	{
		z = s[i];
		s[i] = s[b];
		s[b--] = z;
	}
}
