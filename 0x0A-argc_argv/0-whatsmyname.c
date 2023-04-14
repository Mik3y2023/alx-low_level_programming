#include <stdio.h>

/**
 * main - prints it's name followed by a new line
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
