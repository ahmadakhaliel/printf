#include "main.h"

/**
 * printf_ROT13 - printf str to ROT13
 * @args: type struct va_arg 
 * @params: the parameters struct
 * Return: counter
*/

int print_ROT13(va_list ap, params_t *params)
{
    char *inputString = va_arg(ap, char *);
    (void)params;

    if (inputString == NULL)
        return (0);

    int count = 0;
    char rot13Mapping[] =
        "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	
    int i = 0;
    while (inputString[i] != '\0')
    {
        if ((inputString[i] >= 'A' && inputString[i] <= 'Z') ||
            (inputString[i] >= 'a' && inputString[i] <= 'z'))
        {
            int index = inputString[i] - 'A';
            if (inputString[i] >= 'a' && inputString[i] <= 'z')
            {
                index = inputString[i] - 'a' + 26;
            }
            count += _putchar(rot13Mapping[index]);
        }
        else
        {
            count += _putchar(inputString[i]);
        }
    }

    return (count);
}
