#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: pointer.
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
