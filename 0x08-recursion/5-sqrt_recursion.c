#include "holberton.h"
/**
 * _sqrt_recursion - calls the function to calculate the square.
 * @n: variable.
 * Return: value.
 */

int _sqrt_recursion(int n)
{
	return (calculate_sqrt(0, n));
}

/**
 * calculate_sqrt - calculates the square of a number.
 * @i: variable.
 * @n: variable.
 * Return: -1.
 */

int calculate_sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i < n)
	{
		return (calculate_sqrt(i + 1, n));
	}
	else
	{
		return (-1);
	}
}
