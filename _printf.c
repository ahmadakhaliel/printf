#include "main.h"
/**
 * _printf - printf function concept
 * @format: string to be printed.
 * @...: more elements
 * Return: the count of characters printed.
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	count = useFun(format, args);
	va_end(args);
	return (count);
}
/**
 * useFun - paremters printf
 * @format: list of arguments
 * @args: listing
 * Return: value of print
 */
int useFun(const char *format, va_list args)
{
	int i, j, count, checker;

	fmtsSpecifier f_list[] = {{"c", print_char}, {"d", print_int},
	{"i", print_int}, {"s", printS}, {"%", print_percent},{"b", printBinary}, {"u", print_unsigned},
    {"o", printOctal}, {"x", printHexadecimalLowercase}, {"X",printUnsignedHexadecimalUppercase},{NULL, NULL}};
	count = 0;
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; ++j)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					checker = f_list[j].f(args);
					if (checker == -1)
						return (-1);
					count += checker;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}