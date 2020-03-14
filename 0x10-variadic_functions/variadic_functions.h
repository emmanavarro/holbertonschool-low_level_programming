#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct type_fmt - struct format.
 *
 * @type: format.
 * @f: The function associated.
 */
typedef struct type_fmt
{
	char *type;
	void (*f)(va_list);
} fmts;

/* Print prototypes */

void add_char(va_list list);
void add_int(va_list list);
void add_float(va_list list);
void add_str(va_list list);


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
