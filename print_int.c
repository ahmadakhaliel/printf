#include "main.h"
/**
 * print_int - prints integer
 * @args: va_list variable
 * Return: prints given number of integers
 */
int print_int(va_list args)
{
	long int num1 = va_arg(args, int), num2;
	int div = 1, i = 0;

	if (num1 < 0)
	{
		_putchar('-');
		i++;
		num1 *= -1;
	}
	num2 = num1;
	while (num2 > 9)
	{
		div *= 10;
		num2 = num2 / 10;
	}
	while (div >= 1)
	{
		num2 = num1 % div;
		num1 /= div;
		_putchar(num1 + '0');
		num1 = num2;
		div /= 10;
		i++;
	}
	return (i);
}
