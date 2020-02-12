#include "holberton.h"
/**
 * main - print the word Holberton
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char array[9] = "Holberton";
	int n = 0;

	for (n = 0; n <= 8; n++)
	{
		_putchar(array[n]);
	}
	_putchar('\n');

	return (0);
}
