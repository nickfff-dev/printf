#include "main.h"
/**
* print_pointer - prints a pointer address
* @args: pointer to the pointer to print
* Return: number of digits printed
*/
int print_pointer(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);
	int count = 0;

	_putchar('0');
	_putchar('x');
	count += 2;
	count += print_hex_helper(num);
	return (count);
}
