#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: number of chars
*/

int print_number(int n)
{
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_int - prints integers
 * @args: arguments to print
 * Return: number of chars
*/

int printf_int(va_list args)
{
	return (print_number(va_arg(args, int)));
}

/**
 * printf_dec - prints decimals
 * @args: arguments to print
 * Return: number of chars
*/

int printf_dec(va_list args)
{
	return (print_number(va_arg(args, int)));
}
