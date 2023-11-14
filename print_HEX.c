#include "main.h"

/**
 * print_HEX - prints unsigned hex numbers uppercase
 * @ap: the argument
 * @params: the parameters
 * Return: bytes printed
 */
int print_HEX(va_list ap, params_t *params)
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

	str = convert(l, 16, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && l)
	{
		*--str = '0';
        	*--str = 'X';
	}

	params->unsign = 1;
    return (c += print_number(str, params));
}
