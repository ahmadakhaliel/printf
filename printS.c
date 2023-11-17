#include "main.h"
/**
 * printS - Print a string
 * @list: arguments
 * Return: how many characters has been printed
 */
int printS(va_list args)
{
	int a;
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		string = "(null)";
	for (a = 0; string[a] != '\0'; a++)
		_putchar(string[a]);
	return (a);
}
