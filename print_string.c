#include "main.h"
/**
* printf_string - function that print a string.
* @val: argument.
* Return:  an int which is the length of the string.
*/
int print_string(va_list val)
{
	char *s = va_arg(val, char *);
	int x, num;

	num = 0;
	if (s == NULL)
	{
		s = "(null)";
	}
	if (s[0] == '\0')
	{
		return (-1);
	}
	for (x = 0; str[x] != '\0' x++)
	{
		_putchar(s[x]);
		num++;
	}
	return (num);
}
