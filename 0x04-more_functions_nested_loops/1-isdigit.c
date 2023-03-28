#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: an integer
 *
 * Return: digit
 */

int _isdigit(int c)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
