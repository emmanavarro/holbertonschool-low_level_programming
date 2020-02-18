#include "holberton.h"

/**
 * print_line - print lines
 * @n: number of lines
 **/

void print_line(int n)
{
	int i;

	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
