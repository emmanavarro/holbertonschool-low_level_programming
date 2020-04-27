# include "holberton.h"

/**
 * print_string - Prints a string
 * @list: List of arguments
 * @buffer: Pointer to string
 *
 * Return: number of characters printed
 */
int print_string(va_list list, char *buffer)
{
	char *str;

	str = va_arg(list, char *);

	_strcat(buffer, str);

	return (write(1, buffer, _strlen(buffer));
}

/**
 * print_char - Prints a character
 * @list: List of arguments
 * @buffer: Pointer to a character
 *
 * Return: number of chatacter printed
 */
int print_char(va_list list, char *buffer)
{
	char c;

	c = va_arg(list, int);

	if (c == '\0')
	{
		write(1, buffer, 1);
		return (1);
	}
	_strcat(buffer, c);
	return (1);
}
