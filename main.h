#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct frmt - holds format and print funcion for type
 * @frmt: the format string
 * @frmt_f: pointer to the function that will print the type
 */

typedef struct frmt
{
	char frmt;
	int (*frmt_f)(va_list);
} frmt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list val);
int print_char(va_list val);
int getprintfunc(char frmt_spec, va_list args);

#endif
