#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct frmt - holds format and print funcion for type
 * @frmt_s: the format string
 * @frmt_f: pointer to the function that will print the type
 */

typedef struct frmt
{
	char *frmt_s;
	int (*frmt_f)();
} frmt_type;


int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char *c);
int printf_string(va_list val);
int printf_char(va_list val);
#endif
