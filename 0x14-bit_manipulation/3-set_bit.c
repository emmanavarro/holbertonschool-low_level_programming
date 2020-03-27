#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: given number
 * @index: index to the given number
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n | (1 << index);

	return (1);
}
