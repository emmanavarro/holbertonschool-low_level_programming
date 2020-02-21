#include "holberton.h"
/**
 * reverse_array - reverse a string.
 * @a: array of integers.
 * @n: numbers of elements to swap.
 *
 * Return: nothing..
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	tmp = 0;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
