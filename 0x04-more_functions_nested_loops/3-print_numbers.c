#include "holberton.h"

/**
 * print_numbers - prints from 0 to 9.
 * @i
 * Return: i.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
