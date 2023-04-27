#include "main.h"

/**
* print_hex_upper - print value in hexadecimal format letters in uppercase
* @args: the argument passed
* Return: the number of characters printed
*/
int print_hex_upper(va_list args)
{
	int x;
	int *list;
	int iter = 0;
	unsigned int num1 = va_arg(args, unsigned int);
	unsigned int num2 = num1;

	while (num1 / 16 != 0)
	{
		num1 /= 16;
		iter++;
	}
	iter++;
	list = malloc(iter * sizeof(int));
	for (x = 0; x < iter; x++)
	{
		list[x] = num2 % 16;
		num2 /= 16;
	}
	for (x = iter - 1; x >= 0; x--)
	{
		if (list[x] > 9)
		{
			list[x] = list[x] + 7;
		}
		_putchar(list[x] + '0');
	}
	free(list);
	return (iter);
}
