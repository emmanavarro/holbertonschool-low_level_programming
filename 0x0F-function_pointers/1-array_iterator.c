#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 * a parameter.
 * @action: pointer to function.
 * @array: array to print.
 * @size: size of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
