#include "main.h"

/**
 * printf_binary - prints a binary number.
 * @val: arguments.
 * Return: number of characters printed.
*/

int printf_binary(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int n, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (n = 31; n >= 0; n--)
	{
		int bit = (num >> i) & 1;
		if (bit || count > 0)
		{
			_putchar(bit + '0');
			count++;
		}
	}

	return (count);
}
