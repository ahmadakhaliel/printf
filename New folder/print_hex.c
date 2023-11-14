#include "main.h"

/**
 * print_hex - print unsigned hex num in lcase
 * @ap: argument
 * @params: parameters
 * Return: bytes
 */

int print_hex(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	str = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && l)
	{
		*--str = '0';
		*--str = 'x';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

