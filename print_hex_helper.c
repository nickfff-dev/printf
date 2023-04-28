#include "main.h"

/**
  * print_hex_helper - the function name
  * @num: parameter of type unsigned long int
  * Return: int
 */
int print_hex_helper(unsigned long int num)
{
	int count = 0;
	unsigned long int num2 = num;

	if (num2 / 16)
	{
		count += print_hex_helper(num2 / 16);
	}
	if (num2 % 16 < 10)
	{
		_putchar((num2 % 16) + '0');
		count++;
	}
	else
	{
		_putchar((num2 % 16) + 'W');
		count++;
	}
	return (count);
}
