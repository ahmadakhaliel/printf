#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct formats
{
	char *sym;
	int (*f)(va_list);
} fmtsSpecifier;

int _putchar(char c);
int print_char(va_list list);
int printS(va_list args);
int print_percent(__attribute__((unused))va_list list);
int print_int(va_list args);
int useFun(const char *format, va_list args);
int _printf(const char *format, ...);
int printBinary(va_list args);
int print_unsigned(va_list args);
int printOctal(va_list args);
int printHexadecimalLowercase(va_list args);
int printUnsignedHexadecimalUppercase(va_list args);

#endif
