#include "main.h"

/**
* print_oct - the function prints an oct
* @args: parameter of type va_list
* Return: int
*/
int print_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int x;
	int *list;
	unsigned int div = 0;
	unsigned int num_aux = num;

	while (num / 8 != 0)
	{
		num /= 8;
		div++;
	}
	div++;
	list = malloc(div * sizeof(int));
	x = 0;
	while (x < div)
	{
		list[x] = num_aux % 8;
		num_aux /= 8;
		x++;
	}
	x = div - 1;
	while (x >= 0)
	{
		_putchar(list[x] + '0');
		x--;
	}
	free(list);
	return (div);
}
