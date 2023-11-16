#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H
#include <stdarg.h>
int _putchar(char c);
int printS(char *str);
int print_percent(void);
int print_int(int n);
int _printf(const char *format, ...);
#endif