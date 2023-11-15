#include "main.h"

/**
 * printf_unsigned_int - prints an unsigned integer
 * @args: argument to print
 * Return: number of characters printed
*/

int printf_unsigned_int(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int exp = 1, i = 0;

	while (n / exp > 9)
		exp *= 10;

	while (exp > 0)
	{
		int digit = n / exp;
		_putchar(digit + '0');
		n %= exp;
		exp /= 10;
		i++;
	}

	return (i);
}
