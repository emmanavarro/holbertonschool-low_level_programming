#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: elements of arguments
 *
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	int rd_file, wr_file, fd_from, fd_to;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		rd_file = read(fd_from, buf, 1024);
		wr_file = write(fd_to, buf, rd_file);
	} while (rd_file == 1024);
		if (rd_file < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(99);
		}
		if (wr_file < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		if (close(fd_from) < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
		if (close(fd_to) < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
