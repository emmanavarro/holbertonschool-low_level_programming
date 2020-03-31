#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Name of the file
 * @text_content: String to write
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int ind = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND, 0600);

	if (op < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[ind] != '\0')
			ind++;
	}

	wr = write(op, text_content, ind);

	if (wr < 0)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
