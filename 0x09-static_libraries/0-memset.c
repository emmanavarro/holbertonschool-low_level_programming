#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to n.
 * @n: bytes of the memory area.
 * @b: constant to replace n.
 * Return: s pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
