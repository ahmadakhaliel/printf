#include "main.h"

/**
 * printf_hex_aux_recursive - prints the hexadecimal of a number.
 * @num: the number to be printed.
 * Return : integer.
*/

int printf_hex_aux_recursive(unsigned long int num)
{
    int remainder;
    int count;

    if (num / 16 != 0) 
    {
        count = printf_hex_aux_recursive(num / 16);
        remainder = num % 16;
        char hexDigit = (remainder < 10) ? remainder + '0' : remainder - 10 + 'A';
        _putchar(hexDigit);
        return (count + 1);
    }
   
    else
    
    {
        remainder = num % 16;
        char hexDigit = (remainder < 10) ? remainder + '0' : remainder - 10 + 'A';
        _putchar(hexDigit);
        return (1);
    }
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
    int count = 0;

    z = va_arg(val, void*);
    if (z == NULL)
    {
	    while (*s)
        {
            _putchar(*s);
            count++;
            s++;
        }
        
        return (count);
    }

    n = (unsigned long int)z;
    _putchar('0');
    _putchar('x');
    count += printf_hex_aux_recursive(n);
    return (count + 2);
}
