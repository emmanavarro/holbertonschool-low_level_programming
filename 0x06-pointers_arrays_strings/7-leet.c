#include "holberton.h"
/**
 *leet - encodes a string into 1337.
 *@c: pointer to a string.
 * Return: c.
 */

char *leet(char *c)
{
	int i, j;
	char lowc[] = "aeotl", upc[] = "AEOTL", num[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
		for (j = 0; lowc[j] != '\0' && upc[j] != '\0'; j++)
		{
			if (c[i] == lowc[j] || c[i] == upc[j])
			{
				c[i] = num[j];
			}
		}
	return (c);
}
