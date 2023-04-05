#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in s which consists
 * of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int found;

	found = 1;

	for (; *s; s++)
	{
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (bytes);
		}
	}
	return (bytes);
}
