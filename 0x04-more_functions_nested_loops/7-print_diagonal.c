#include "holberton.h"

/**
 * print_diagonal - print diagonals
 * @n: number of diagonals
 * @i
 * @j
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			_putchar(' ');
			_putchar('\\');
			_putchar ('\n');
		}
		if (n <= 0)
		{
		_putchar('\n');
		}
	}
}
