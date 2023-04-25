#include "main.h"

/**
  * print_digit - the function name
  * @val: parameter of type va_list .
  * Return: int .
 */
int print_digit(va_list val)
{
	int dec = 1;
	int i = 0;
	long int digit = va_arg(val, int);
	long int x;

	if (digit < 0)
	{
		i += _putchar('-');
		digit *= -1;
	}
	if (digit < 10)
	{
		return (i += _putchar(digit + '0'));
	}
	x = digit;
	while (x > 9)
	{
		dec *= 10;
		x /= 10;
	}
	while (dec >= 1)
	{
		i += _putchar(((digit / dec) % 10) + '0');
		dec /= 10;
	}
	return (i);
}
