#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: value int numbers.
  *
  * Return: Sum of the parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ls_sum;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ls_sum, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls_sum, int);
	}
	va_end(ls_sum);

	return (sum);
}
