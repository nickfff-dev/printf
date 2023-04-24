#include "main.h"

/**
 * _printf - function that prints any character
 * @format: mandatory arguments that specifies format
 * Return: an int len of the printed chars
 */
int _printf(const char *format, ...)
{
	frmt_type frmt_d[] = {
	{"%s", printf_string},
	{"%c", printf_char}
	};
	va_list args;
	int x == 0;
	int y;
	int arlen = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[x] != '\0')
	{
		y = 2;
		while (y >= 0)
		{
		if (frmt_d[y].frmt_s[0] == format[x] && frmt_d.frmt_s[1] == format[x + 1])
		{
			arlen = frmt_d[y].frmt_f(args);
			x = x + 2;
		}
		y--;
		}
		arlen++;
		x++;
		}
		va_end(args);
		return (len);
	}
