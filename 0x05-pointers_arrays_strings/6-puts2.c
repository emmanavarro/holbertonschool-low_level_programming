#include "holberton.h"
/**
 * puts2 - prints every other character of a string.
 * @str: pointer.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}