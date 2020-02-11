#include "holberton.h"

/**
* print_alphabet - alphabet, in lowercase with new line
*
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
