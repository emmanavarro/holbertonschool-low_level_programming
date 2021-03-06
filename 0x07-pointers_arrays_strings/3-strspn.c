#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer.
 * @accept: character.
 * Return: 0 always.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, lnt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				lnt++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (lnt);
}
