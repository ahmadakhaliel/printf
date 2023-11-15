#include "main.h"

/**
 * printf_HEX - prints hexadecimal of an unsigned integer.
 * @val: arguments.
 * Return: counter.
 */

int printf_HEX(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    int counter = 0;

    // Calculate the number of digits required
    while (num / 16 != 0)
    {
        num /= 16;
        counter++;
    }
    counter++;

    while (counter > 0)
    {
        int digit = va_arg(val, int);
        char hexDigit = (digit < 10) ? digit + '0' : digit + '7';
        _putchar(hexDigit);
        counter--;
    }

    return (counter);
}
