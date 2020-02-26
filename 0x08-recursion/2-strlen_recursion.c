#include "holberton.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: pointer to the string.
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (_strlen_recursion(++s) + 1);
	}
	return (0);
}
