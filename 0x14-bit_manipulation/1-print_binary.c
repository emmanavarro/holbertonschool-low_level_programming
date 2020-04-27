#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_b(n);
}

/**
 * print_b - prints a binary in reverse
 * @n: Given number
 */

void print_b(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
		print_b(n >> 1);

	_putchar((n & 1) + '0');
}
