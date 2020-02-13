#include "holberton.h"

/**
 * more_numbers - prints from 0 to 14.
 * @i
 * @j
 * @m
 * Return: i.
 */
void more_numbers(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			m = j;

			if ((m / 10) > 0)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');

		}
		_putchar('\n');
	}
}
