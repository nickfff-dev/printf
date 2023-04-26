#include "main.h"
/**
* print_unsigned - funtion to print integer
* @val: the list of arguments passed to the function
* Return: an interger of the number of characters printed
*/
int print_unsigned(va_list val)
{
	unsigned int x = va_arg(val, unsigned int);
	int fig, k = x % 10, num, res = 1;
	int j = 1;

	x = x / 10;
	fig = x;
	if (k < 0)
	{
		_putchar('-');
		fig = -fig;
		x = -x;
		k = -k;
		j++;
	}
	if (fig > 0)
	{
		while (fig / 10 != 0)
		{
			res = res * 10;
			fig = fig / 10;
		}
		fig = x;
		while (res > 0)
		{
			num = fig / res;
			_putchar(num + '0');
			fig = fig - (num * res);
			res = res / 10;
			j++;
		}
	}
	_putchar(k + '0');
	return (j);
}
