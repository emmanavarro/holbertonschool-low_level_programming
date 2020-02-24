#include "holberton.h"

/**
 * _strcpy - function that copies a string
 * @dest: pointer of destination
 * @src: string to copy
 * Return: pointer to dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
