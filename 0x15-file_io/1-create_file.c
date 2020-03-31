#include "holberton.h"

/**
 * create_file - Creates a file from a string
 * @filename: Name of the file
 * @text_content: String to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int ind = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

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
