#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line.
  * @separator: pointer to the string to be printed.
  * @n: value int numbers.
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));

		if (separator && (i < n - 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(lst);
}
