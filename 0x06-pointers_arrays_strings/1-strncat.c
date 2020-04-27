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
	int i, j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];

	
	}
	return (dest);
}
