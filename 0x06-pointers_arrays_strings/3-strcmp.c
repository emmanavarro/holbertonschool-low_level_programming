#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1: char compared with s2.
 * @s2: char comparedt with s1.
 * Return: diference between s1 and s2..
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int d = 0;

	while ((s1[i] != '\0' || s2[i] != '\0') && d == 0)
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
		}
		i++;
	}
	return (d);
}
