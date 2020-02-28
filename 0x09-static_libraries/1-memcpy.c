#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area..
 * @n: bytes of the memory area.
 * @src: pointer to memory area.
 * Return: pointer to desc.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
