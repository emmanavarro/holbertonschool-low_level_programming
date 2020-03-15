#ifndef HOLBERTON_PRINTF_H
#define HOLBERTON_PRINTF_H

/* Define buffer */

#define BUFFER_SIZE = 1024

/* Included standard libraries */

#include <stdio.h>
#include <stdlib.h>

/**
 * struct printf_types - struct formats.
 * 
 * @ftype: format.
 * @f: function associated.
 */
typedef struct printf_types
{
	char *ftype;
	void (*f)(va_list);
} p_types;

/* Print prototypes */

/* Generic functions */

char *_strcat(char *dest, char *src, int n);



int _printf(const char *format, ...);

#endif /* HOLBERTON_PRINTF_H */
