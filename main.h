#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H
#include <stdarg.h>
int _putchar(char c);
int print_char(va_list list);
int printS(va_list args);
int print_percent(__attribute__((unused))va_list list);
int print_int(va_list args);
int _printf(const char *format, ...);
#endif