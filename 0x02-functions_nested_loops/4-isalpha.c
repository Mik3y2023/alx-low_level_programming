#include "main.h"

/**
 * _isalpha - check for alphabetic order
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int g)
{
	return ((g >= 'a' && g <= 'z') || (g >= 'A' && g <= 'Z'));
}
