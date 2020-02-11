#include "holberton.h"

/**
* print_alphabet_x10 - 10 times alphabet, in lowercase with new line
*
*/
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
