#include "main.h"
/**
 * print_int - prints an integer a decimal number.
 * @n: int or dec to be printed
 * Return: the digit count of that int.
 */
int print_int(int n)
{
    char buffer[20];
    int i = 0, x;

    if (n < 0) {
        _putchar('-');
        n *= -1;
    }

    while (n > 0) {
        buffer[i++] = n % 10 + '0';
        n /= 10;
    }
    x = i;
    while (i > 0) {
        _putchar(buffer[--i]);
    }
    return (x);
}
