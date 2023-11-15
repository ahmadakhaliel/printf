#include "main.h"

/**
 * printf_ROT13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 */

int printf_ROT13(va_list args)
{
    int counter = 0;
    char *inputString = va_arg(args, char*);

    if (inputString == NULL)
        inputString = "(null)";


    char alpha[] = {"abcdefghijklmnopqrstuvwxyz"};
    char beta[] = {"nopqrstuvwxyzabcdefghijklm"};

    char ALPHA[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char BETA[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM"};

    int i = 0;

    while (inputString[i])
    {
        int found = 0;
        int j = 0;

        while (alpha[j] && !found)
        {
            if (inputString[i] == alpha[j])
            {
                _putchar(beta[j]);
                counter++;
                found = 1;
            }
            j++;
        }

        if (!found)
        {
            _putchar(inputString[i]);
            counter++;
        }

        i++;
    }
    return (counter);
}
