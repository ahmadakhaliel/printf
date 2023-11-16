#include "main.h"
/**
 * print_char - print characters
 * @list: arguments
 * Return: how many characters has been printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}