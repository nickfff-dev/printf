#include "main.h"

/**
 * _printf -  a function that mimic  printf
 * @format: the format specifier character
 * Return: the count of chars printed
 */

int _printf(const char *format, ...)
{	int j = 0, k = 0, l;
	va_list val;

	va_start(val, format);
	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	return (-1);
	while (format[j])
	{
	l = 0;
	if (format[j] == '%')
	{
		if (!format[j + 1] || (format[j + 1] == ' ' && !format[j + 2]))
		{
			k = -1;
			break;
		}
		l += getprintfunc(format[j + 1], val);
		if (l == 0)
			k += _putchar(format[j + 1]);
		if (l == -1)
			k = -1;
		j++;
	}
	else
	{
		(k == -1) ? (_putchar(format[j])) : (k += _putchar(format[j]));
	}
	j++;
	if (k != -1)
	k += l;
	}
	va_end(val);
	return (k);
}
