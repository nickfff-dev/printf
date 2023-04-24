#include "main.h"
/**
* printf_char - function that prints a character.
* @val:  an unknown number of arguments
* Return:  an interger
*/
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
