#include "main.h"
/**
 * _printf - printf function
 * @format: list of arguments
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, x, len = 0;
	char c, *str;
	
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			switch (*++format)
			{
				case 'd':
					x = va_arg(args, int);
					write(1, &x, 1);
					count++;
					break;
				case 'c':
					c = va_arg(args, char);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					while (str[len] != '\0')
						len++;
					write(1, str, len);
					count += len;
					break;
				default:
					putchar('%');
					putchar(*format);
					count += 2;
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}