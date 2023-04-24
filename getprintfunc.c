#include "main.h"

/**
 * getprintfunc - callback to the right func depending on flag
 * @frmt_spec: char for the format
 * @args: the characters to be printed
 * Return: an int y number of the printed chars
 */
int getprintfunc(char frmt_spec, va_list args)
{	int x = 0;
	int y = 0;

	frmt_t frmt_d[] = {
	{'s', print_string},
	{'c', print_char},
	{'%', print_mod}
	};

	while (frmt_d[x].frmt)
	{
		if (frmt_spec == frmt_d[x].frmt)
		{
			y += frmt_d[x].frmt_f(args);
		}
		x++;
	}
	if (y == 0)
	{
		y += _putchar('%');
		y += _putchar(frmt_spec);
	}
	return (y);

	}
