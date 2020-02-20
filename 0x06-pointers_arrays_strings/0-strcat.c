#include "holberton.h"
/**
 * *_strcat - concatenates two strings..
 * @dest: char that concatenates.
 * @src: char to be concatenated.
 * Return: pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
