#include "main.h"

/**
 * printf_HEX_aux - prints the hexadecimal of a num
 * @num: the number to be printed.
 * Return: the length of the num.
 */

int printf_HEX_aux(int num)
{
    char hexDigits[] = "0123456789ABCDEF";
    char hexBuffer[20];
    int index = 0;

    do {
        hexBuffer[index++] = hexDigits[num % 16];
        num /= 16;
    } while (num != 0);

    while (index > 0) {
        _putchar(hexBuffer[--index]);
    }

    return (index);
}

/**
 * printf_ex_str - print exclusuives string.
 * @val: argument.
 * Return: the length of ST.
 */

int printf_ex_str(va_list val)
{
    char *s;
    int n, m = 0;
    int cast;

    s = va_arg(val, char *);
    if (s == NULL)
        s = "(null)";

    for (n = 0; s[n] != '\0'; n++)
    {
        if (s[n] < 32 || s[n] >= 127)
        {
            _putchar('\\');
            _putchar('x');
            m += 2;
            cast = s[n];
            if (cast < 16)
            {
                _putchar('0');
                m++;
            }
            len += printf_HEX_aux(cast);
        }
        else
        {
            _putchar(s[n]);
            m++;
        }
    }

    return (m);
}
