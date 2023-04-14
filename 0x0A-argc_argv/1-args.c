#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments followed by a new line
 * @argc: number of arguments in a command line
 * @argv: array containing arguments in a command line
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
