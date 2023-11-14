#include "main.h"

/**
 * _puts - prints a str \n
 * @str: string
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}
