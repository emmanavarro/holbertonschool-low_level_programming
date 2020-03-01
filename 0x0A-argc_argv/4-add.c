#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnum - checks if is only numbers.
 * @c: counter.
 * Return: 1 (only digits) or 0.
 */
int isnum(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (!isdigit(c[i]))
			return (0);
	}
	return (1);
}

/**
 * main - add two numbers.
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: 1 (Error) or 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isnum(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%u\n", sum);
	return (0);
}
