#include <stdio.h>

/**
 * main - prints all arguments that it recieves 
 * @argc: number of arguments in a command line
 * @argv: arrays containing arguments in a command line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);

}
