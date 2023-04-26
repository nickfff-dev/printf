#include "main.h"

/**
* print_bina - function that prints the binary representation of x number.
* @val: the list of arguments.
* Return: the number of characters printed.
*/
int print_bina(va_list val)
{
	int spec = 0;
	int num = 0;
	int freq, x = 1, y;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int ptr;

	for (freq = 0; freq < 32; freq++)
	{
		ptr = ((x << (31 - freq)) & num);
		if (ptr >> (31 - freq))
		{
			spec = 1;
		}
		if (spec)
		{
			y = ptr >> (31 - freq);
			_putchar(y + 48);
			num++;
		}
	}
	if (num == 0)
	{
		num++;
		_putchar('0');
	}
	return (num);
}
