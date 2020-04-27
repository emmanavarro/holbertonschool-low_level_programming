#include "holberton.h"

/**
 * get_format - Select the function according to the placeholder.
 * @fmt: Pointer to the placeholder.
 *
 * Return: 0 (success).
 */

int get_format(const char *fmt)
{
	print_f opt[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	int posit_opt = 0;

	while (opt[posit_opt].placeholder != NULL)
	{
		if (*fmt == *opt[posit_opt].placeholder && fmt[1] == '\0')
			return (opt[posit_opt].f);
		posit_opt++;
	}
	return (0);
}
