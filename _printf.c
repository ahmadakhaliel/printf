#include "main.h"
/**
 * _printf - printf function concept
 * @format: string to be printed.
 * @...: more elements
 * Return: the count of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    while (*format != '\0')
    {
        if (*format != '%')
        {
            _putchar(*format);
            count++;
        }
        else
        {
            // Handle format specifiers
            switch (*++format)
            {
            case 'd': case 'i':
                    count += print_int(va_arg(args, int));
                    break;
                case 'c':
                    count += _putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printS(va_arg(args, char*));
                    break;
                case '%':
                    count += print_percent();
                    break;
                default:
                    // Handle unknown format specifiers
                    _putchar('%');
                    _putchar(*format);
                    count += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}