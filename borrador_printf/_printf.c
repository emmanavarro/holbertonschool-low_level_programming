#include "holberton.h"

/**
 * _printf - produces output according to a format.
 * @format: pointer to character string.
 *
 * Return: number of character printed excluding null byte.
 */

int _printf(const char *format, ...)
{
	char buffer[BUFFER_SIZE];
	va_list list;
	int (*g_fmt)();
	int posit_fmt = 0;
	const char *g;

	va_start(list, format);
	g_fmt = get_format(format);
	clear_bufffer(buffer); /* crear función para limpiar buffer */
	for (g = format; *g; g++)
	{
		if (g == '%')
		{
			g_fmt = get_format(g);
			
		}
		format[posit_fmt];

		if (g_fmt)
			g_fmt();
	}
}
