#include "main.h"
/**
 * printS - Print a string
 * @list: arguments
 * Return: how many characters has been printed
 */
int printS(va_list args)
{
	int i;

	char *str = va_arg(args, char*);

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);

	return (i);
}
