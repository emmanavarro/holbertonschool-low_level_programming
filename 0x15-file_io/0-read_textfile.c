#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int op, rd, wr;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	
	if (op == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	
	if (!buf)
	{
		close(op);
		return (0);
	}

	rd = read(op, buf, letters);
	
	if (rd == -1)
	{
		close(op);
		free(buf);
		return (0);
	}
	
	wr = write(STDOUT_FILENO, buf, rd);
	
	if (wr == -1)
	{
		close(op);
		free(buf);
		return (0);
	}
	close(op);
	free(buf);
	return (rd);
}
