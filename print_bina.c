#include "main.h"

/**
* print_bina - function that prints the binary representation of a number
* @args: an unknown number of arguments
* Return: a number of characters printed
*/
int print_bina(va_list args)
{
	int spec = 0;
	int freq = 0;
	int iter, j = 1, k;
	unsigned int mvar = va_arg (args, unsigned int);
	unsigned int ptr;

	for (iter = 0; iter < 32; iter++)
	{
		ptr = ((j << (31 - iter)) & mvar);
		if (ptr >> (31 - iter))
		{
			spec = 1;
		}
		if (spec)
		{
			k = ptr >> (31 - iter);
			_putchar(k + 48);
			freq++;
		}
	}
	if (freq == 0)
	{
		freq++;
		_putchar('0');
	}
	return (freq);
}
