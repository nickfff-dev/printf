#include "main.h"

/**
* print_hex_upper - print value in hexadecimal format letters in uppercase
* @args: the argument passed
* Return: the number of characters printed
*/
int print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int x = 0;
	unsigned int div = 1;
	unsigned int num_aux = num;

	while (num_aux > 15)
	{
		div *= 16;
		num_aux /= 16;
	}
	while (div != 0)
	{
		if (num >= 16)
		{
			if ((num / div) < 10)
			{
				_putchar((num / div) + '0');
				x++;
			}
			else
			{
				_putchar((num / div) + 55);
				x++;
			}
			num %= div;
			div /= 16;
		}
		else
		{
			_putchar(num + '0');
			x++;
			div = 0;
		}
	}
	return (x);
}
