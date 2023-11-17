#include "main.h"
/**
 * printBinary - prints binary
 * @args: arguments
 * Return: count.
 */
int printBinary(va_list args)
{
	int count = 0, n = va_arg(args, int);
	
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	int highestPowerOfTwo = 0;
	int temp = n;
	
	while (temp > 0)
	{
		temp >>= 1;
		highestPowerOfTwo++;
	}

	for (int i = highestPowerOfTwo - 1; i >= 0; i--)
	{
		int mask = 1 << i;
		if ((n & mask) != 0)
		{
			_putchar('1');
			count++;
		}
		else
		{
			_putchar('0');
			count++;
		}
	}
	return (count);
}
