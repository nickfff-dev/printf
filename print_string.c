#include "main.h"
/**
* printf_string - function that print a string.
* @val: argument.
* Return:  an int which is the length of the string.
*/
int printf_string(va_list val)
{
	char *s;
	int x, num;

	s = va_arg(val, char *);

	if (s == NULL)
	{
		s = "(null)";
		num = _strlen(s);
		for (x = 0; x < num; x++)
		_putchar(s[x]);
		return (num);
	}
	else
	{
		num = _strlen(s);
		for (x = 0; x < num; x++)
		_putchar(s[x]);
		return (num);
	}
}
