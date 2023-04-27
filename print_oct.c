#include "main.h"

/**
  * print_oct - the function prints an oct
  * @args: parameter of type va_list
  * Return: int
 */
int print_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int x = 0;
	unsigned int div = 1;
	unsigned int num_aux = num;

	while (num_aux > 7)
	{
		div *= 8;
		num_aux /= 8;
	}
	while (div != 0)
	{
		_putchar((num / div) + '0');
		x++;
		num %= div;
		div /= 8;
	}
	return (x);
}
