#include "main.h"

/**
 * printf_StrRev - prints a string in reverse
 * @args: type struct
 * Return: the number of characters printed
*/

int printf_StrRev(va_list args)
{
    char *s = va_arg(args, char*);
    int i, count = 0;

    if (s == NULL)
        s = "(null)";

    while (s[count] != '\0')
        count++;

    // Print the string in Reverse
    for (i = count - 1; i >= 0; i--)
        _putchar(s[i]);

    return (count);
}
