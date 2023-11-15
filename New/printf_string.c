#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the length of the string.
*/

int printf_string(va_list val)
{
    char *s = va_arg(val, char *);
    int len = (s == NULL) ? _strlen("(null)") : _strlen(s);

    int i = 0;
    while (i < len && _putchar(s ? s[i] : "(null)"[i]) != EOF)
    {
        i++;
    }

    return (len);
}
