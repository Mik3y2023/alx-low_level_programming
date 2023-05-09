#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads textfile and prints it to the POSIX stdout
 * @filename: name of the file being read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters read and printed, 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b;
	int cf;
	char *buffer;

	if (filename == NULL)
		return (0);
	cf = open(filename, O_RDONLY);
	if (cf == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	a = read(cf, buffer, letters);
	b = write(STDOUT_FILENO, buffer, a);

	free(buffer);
	close(cf);
	return (b);
}
