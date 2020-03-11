#include "function_pointers.h"
/**
  * print_name - function that prints a name.
  * @f: pointer to function.
  * @name: name to print.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
