#include "holberton.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: checks the value of integer
  * Return: value -n, n
  */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
