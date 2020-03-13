#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: pointer to the string to be printed.
 * @n: value int numbers.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst_str;
	unsigned int i;
	char *ptr;

	va_start(lst_str, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(lst_str, char *);

		if (ptr)
			printf("%s", ptr);

		else
			printf("(nil)");
			
		if (separator && (i < n - 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(lst_str);
}
