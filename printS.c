#include "main.h"
/**
 * printS - a function that prints a string similar to 'puts'.
 * @str: string to be acted upon.
 * Return: Always void.
 */
int printS(va_list args)
{
	int i;

	char *str = va_arg(args, char*);

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);

	return (i);
}
