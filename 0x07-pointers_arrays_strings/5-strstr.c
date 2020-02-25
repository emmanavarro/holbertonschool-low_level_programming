#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer.
 * @needle: character.
 * Return: NULL..
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, p;

	for (i = 0; haystack[i] !='\0'; i++)
	{
		for (p = i, j = 0; needle[j] != '\0'; i++, p++)
		{
			if (needle[j] != haystack[p] || haystack[p] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
