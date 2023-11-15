#include "main.h"

/**
 * printf_unsigned - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed on success,
 *          -1 if not success.
*/

int printf_unsigned(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    int i = 0;

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    while (n != 0)
    {
        int digit = n % 10;
        _putchar(digit + '0');
        n /= 10;
        i++;
    }


    return (i);
}
