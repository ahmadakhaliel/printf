#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct formats
{
	char *sym;
	int (*f)(va_list);
} fmtsSpefier;

typedef struct parameters
{
	unsigned int unsign		: 1;

	unsigned int plus_flag		: 1;
	unsigned int width;
	unsigned int precision;

	unsigned int l_modifier		: 1;
} params_t;

int _putchar(char c);
int _printf(const char *format, ...);
int charsFormats(const char *format, va_list args);
int _percent(va_list list);
int _char(va_list list);
int _string(va_list list);
int _integer(va_list list);
int printf_char(va_list val);
int printf_hex_aux_recursive(unsigned long int num);
int printf_pointer(va_list val);
int printf_HEX_aux(int num);
int printf_ex_str(va_list val);
int printf_percentage_character(void);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int print_ROT13(va_list ap, params_t *params);
int printf_octal(va_list val);
int printf_unsigned_int(va_list args);
int printf_binary(va_list val);
int printf_StrRev(va_list args);
int print_number(int n);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int _strlenchar(const char *s);
int printf_unsigned(va_list args);
int printf_string(va_list val);

#endif
