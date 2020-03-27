#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to evaluate with index
 * @index: index of the bit you want to get
 *
 * Return: value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 63)
		return (-1);

	n = (n >> index);
	n = (n & m);

	return (n);
}
