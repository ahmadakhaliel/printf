#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - printf function
 * @format: list of arguments
 * Return:  the number of characters printed
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
			putchar(*format);
			count++;
		}
		else
		{
			switch (*++format)
			{
				case 'd':
					count += fprintf(stdout, "%d", va_arg(args, int));
					break;
				case 'c':
					count += fprintf(stdout, "%c", va_arg(args, char));
					break;
				case 's':
					count += fprintf(stdout, "%s", va_arg(args, char *));
					break;
				case 'f':
					count += fprintf(stdout, "%f", va_arg(args, double));
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
