#include "main.h"

/**
  * print_hex_lower - function that prints hexadecimal format x
  * @args: parameter of type va_list
  * Return: count f printed hexas
 */
int print_hex_lower(va_list args)
{
	int x;
	int *list;
	int y = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num_aux = num;

	while (num_aux > 15)
	{
		num_aux /= 16;
		y++;
	}
	list = malloc(sizeof(int) * y);
	if (list == NULL)
	{
		return (0);
	}
	while (num > 15)
	{
		list[x] = num % 16;
		num /= 16;
		x++;
	}
	list[x] = num;
	while (x >= 0)
	{
		if (list[x] < 10)
		{
			_putchar(list[x] + '0');
		}
		else
		{
			list[x] = list[x] + 39;
		}
		x--;
	}
	free(list);
	return (y + 1);
}
