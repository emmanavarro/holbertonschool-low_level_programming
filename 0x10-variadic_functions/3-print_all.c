#include "variadic_functions.h"

/**
 * add_char - print a character.
 * @list: list of arguments.
 */

void add_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * add_int - print an int.
 * @list: list of arguments.
 */

void add_int(va_list list)
{
	printf("%i", va_arg(list, int));
}


/**
 * add_float - print a float.
 * @list: list of arguments.
 */

void add_float(va_list list)
{
	printf("%f", va_arg(list, double));
}


/**
 * add_str- print a string.
 * @list: list of arguments.
 */

void add_str(va_list list)
{
	char *str = va_arg(list, char*);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments.
 *
 */

void print_all(const char * const format, ...)
{
	fmts types[] = {
		{"c", add_char},
		{"i", add_int},
		{"f", add_float},
		{"s", add_str},
		{NULL, NULL}
	};

	int i, j = 0;
	va_list list;
	char *ptr = "";

	va_start(list, format);

	while (format && format[j])
	{
		i = 0;

		while (types[i].f != NULL)
		{
			if (types[i].type[0] == format[j])
			{
				printf("%s", ptr);
				types[i].f(list);
				ptr = ", ";
				break;
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
