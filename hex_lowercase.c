#include "main.h"
/**
 * printHexadecimalLowercase - prints hex
 * @args: arguments
 * Return: count.
 */
int printHexadecimalLowercase(va_list args)
{
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	int highestPowerOfSixteen = 0;
	unsigned int temp = n;

	while (temp > 0)
	{
		temp >>= 4;
		highestPowerOfSixteen++;
	}

	for (int i = highestPowerOfSixteen - 1; i >= 0; i--)
	{
		int mask = 0xF << (4 * i);
		unsigned int digit = (n & mask) >> (4 * i);

		if (digit < 10)
		{
			_putchar('0' + digit);
			count++;
		}
		else
		{
			_putchar('a' + digit - 10);
			count++;
		}
	}
	return (count);
}
/**
 * printUnsignedHexadecimalUppercase - prints hex
 * @args: arguments
 * Return: count.
 */
int printUnsignedHexadecimalUppercase(va_list args)
{
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	int highestPowerOfSixteen = 0;
	unsigned int temp = n;

	while (temp > 0)
	{
		temp >>= 4;
		highestPowerOfSixteen++;
	}

	for (int i = highestPowerOfSixteen - 1; i >= 0; i--)
	{
		int mask = 0xF << (4 * i);
		int digit = (n & mask) >> (4 * i);

		if (digit < 10)
		{
			_putchar('0' + digit);
			count++;
		}
		else
		{
			_putchar('A' + digit - 10);
			count++;
		}
	}
	return (count);
}

