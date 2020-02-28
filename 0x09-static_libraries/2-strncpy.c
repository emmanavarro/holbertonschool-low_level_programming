#include "holberton.h"
/**
 * _strncpy - concatenates two strings.
 * @dest: char that concatenates.
 * @src: char to be concatenated.
 * @n: number of characters of dest to be concatenated.
 * Return: pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = ('\0');
	}
	return (dest);
}
