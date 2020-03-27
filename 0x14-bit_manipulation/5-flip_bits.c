#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number to compare with m
 * @m: number to compare wit n
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int bits = 0;

	i = n ^ m;

	while (i)
	{
		bits = bits + (i & 1);
		i = i >> 1;
	}

	return (bits);
}
