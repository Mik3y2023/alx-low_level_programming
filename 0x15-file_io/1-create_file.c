#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file
 * @filename: the name of the file to be created
 * @text_content: - string to write the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t cf = 0, a = 0, b = 0;

	if (filename == NULL)
		return (-1);
	if (!text_content)
		text_content = "";
	cf = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (cf < 0)
		return (-1);
	while (text_content[b])
		b++;
	a = write(cf, text_content, b);
	if (a < 0)
		return (-1);
	close(cf);
	return (1);
}
