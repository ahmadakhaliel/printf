#include "main.h"
/**
 * printS - Print a string
 * @list: arguments
 * Return: how many characters has been printed
 */
int printS(va_list args)
{
	int i;
	char *string;

	string = va_arg(list, char *);

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}