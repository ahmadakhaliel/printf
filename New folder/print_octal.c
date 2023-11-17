#include "main.h"
/**
 * printOctal - prints octal
 * @args: arguments
 * Return: count.
 */
int printOctal(va_list args)
{
	int count = 0;
	unsigned int n = va_arg(args, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	int highestPowerOfEight = 0;
	unsigned int temp = n;
	
	while (temp > 0)
	{
		temp >>= 3;
		highestPowerOfEight++;
	}

	for (int i = highestPowerOfEight - 1; i >= 0; i--)
	{
		unsigned int mask = 7 << (3 * i);
		unsigned int digit = (n & mask) >> (3 * i);
		_putchar('0' + digit);
		count++;
	}
	return (count);
}
