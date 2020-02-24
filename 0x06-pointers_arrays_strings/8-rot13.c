#include "holberton.h"

/**
 *rot13 - encodes a string using rot13.
 *@c: pointer to a string.
 *Return: c.
 */

char *rot13(char *c)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = a13[j];
				break;
			}
		}
	}
	return (c);
}
