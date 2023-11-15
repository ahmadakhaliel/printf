#include "main.h"

/**
 * printf_hex_aux_recursive - prints the hexadecimal of a number.
 * @num: the number to be printed.
 * Return : integer.
*/

void printf_hex_aux_recursive(unsigned long int num)
{
	if (num / 16 != 0)
        printf_hex_aux_recursive(num / 16);

    int remainder = num % 16;
    char hexDigit = (remainder < 10) ? remainder + '0' : remainder - 10 + 'A';
    _putchar(hexDigit);
}

/**
 * printf_pointer - prints hexadecimal of a pointer.
 * @val: arguments.
 * Return: count
*/

int printf_pointer(va_list val)
{
    void *z;
    char *s = "(nil)";
    long int n;
    int i;

    z = va_arg(val, void*);
    if (z == NULL)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            _putchar(s[i]);
        }
        return (i);
    }

    n = (unsigned long int)z;
    _putchar('0');
    _putchar('x');
    printf_hex_aux_recursive(n);
    return (2 + sizeof(void *) * 2);
}
