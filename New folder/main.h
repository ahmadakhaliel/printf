#ifndef _PRINTF_H
#define _PRINTF_H
#define CONVERT_LOWERCASE
#define CONVERT_UNSIGNED

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH
#define NULL_STRING "(null)"
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/**
 * struct parameters - parameters struct
 * @unsign: unsigned value
 * @plus_flag:plus_flag specified
 * @space_flag: #_flag specified
 * @hashtag_flag: _flag specified
 * @zero_flag: zero_flag specified
 * @minus_flag: negative_flag specified
 * @width: width specified
 * @precision: precision
 * @h_modifier: h_mod
 * @l_modifier: l_mod
 */

typedef struct parameters
{
	unsigned int unsign;
	unsigned int plus_flag;
	unsigned int space_flag;
	unsigned int hashtag_flag;
	unsigned int zero_flag;
	unsigned int minus_flag;
	unsigned int width;
	unsigned int precision;
	unsigned int h_modifier;
	unsigned int l_modifier;
} params_t;

/**
 * struct specifier - data str
 * @specifier: format
 * @f: fn
 */

typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;

int _putchar(int c); /* _putchar.c */
int _puts(char *str); /* _puts.c */

int _printf(const char *format, ...);  /* _printf.c*/

int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_S(va_list ap, params_t *params);
char *convert(long int num, int base, int flags, params_t *params);
int print_unsigned(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);
int (*get_specifier(char *s))(va_list ap, params_t *params);
int get_print_func(char *s, va_list ap, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);
char *get_width(char *s, params_t *params, va_list ap);
int print_hex(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_binary(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);
int print_from_to(char *start, char *stop, char *except);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);
void init_params(params_t *params, va_list ap);
char *get_precision(char *p, params_t *params, va_list ap);

#endif
