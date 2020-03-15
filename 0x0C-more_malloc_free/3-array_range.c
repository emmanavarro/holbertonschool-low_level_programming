#include <stdlib.h>
/**
  * array_range - creates an array of integers.
  * @min: minimum value.
  * @max: maximun value.
  * Return: p.
  */
int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
