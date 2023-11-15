#include "main.h"

/**
 * printf_hex - prints hexadecimal of unsigned integer.
 * @val: arguments.
 * Return: counter.
*/

int printf_hex(va_list val)
{
    int n;
    int *array;
    int counter = 0;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int temp = num;

    while (num / 16 != 0)
    {
        num /= 16;
        counter++;
    }
    counter++;

    array = malloc(counter * sizeof(int));
    if (array == NULL)
    {
        return (-1);
    }

    for (n = 0; n < counter; n++)
    {
        array[n] = temp % 16;
        temp /= 16;
    }

    for (n = counter - 1; n >= 0; n--)
    {
        if (array[n] > 9)
            array[n] = array[n] + 'A' - 10;
        _putchar(array[n] + '0');
    }

    free(array);

    return (counter);
}
