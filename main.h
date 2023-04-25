#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct frmt - holds format and print function for type
 * @frmt: the format string
 * @frmt_f: pointer to the function that will print the type
 */

typedef struct frmt
{
	char frmt;
	int (*frmt_f)(va_list);
} frmt_t;

/*prototypes*/
int getprintfunc(char frmt_spec, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
/*Conversion specifiers*/
int print_string(va_list val);
int print_char(va_list val);
int print_mod(va_list val);
int print_digit(va_list val);
#endif
