#include "main.h"
/**
 * printS - Print a string
 * @list: arguments
 * Return: how many characters has been printed
 */
int printS(va_list args)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (string == NULL)
		*string = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
