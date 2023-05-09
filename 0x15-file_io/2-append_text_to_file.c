#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: name of file to append
 * @text_content: string to add at end of file
 *
 * Return: 1 if success, (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cf = 0, a = 0, b = 0;

	if (filename == NULL)
		return (-1);
	cf = open(filename, O_WRONLY | O_APPEND);
	if (cf < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(cf, text_content, b);
		if (a < 0)
			return (-1);
	}
	close(cf);
	return (1);
}
