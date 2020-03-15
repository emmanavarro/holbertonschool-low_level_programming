#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size array.
 * @c: variable init.
 * Return: NULL or pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
		if (p == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
