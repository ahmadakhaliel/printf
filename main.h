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

int _putchar(char c);
int _printf(const char *format, ...);
int charsFormats(const char *format, va_list args);
int _percent(va_list list);
int _char(va_list list);
int _string(va_list list);
int _integer(va_list list);
int printf_char(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_pointer(va_list val);
int printf_HEX_aux(int num);
int printf_ex_str(va_list val);
int printf_percentage_character(void);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_ROT13(va_list args);





#endif
