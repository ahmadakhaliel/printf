#include "main.h"

/**
 * printf_ROT13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 */

	int printf_ROT13(va_list args)
{
    int counter = 0;
    char *c = va_arg(args, char*);

    if (c == NULL)
        c = "(null)";

    // alpha and beta declaration
	
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    for (int i = 0; c[i]; i++)
    {
        int k = 0;
        for (int j = 0; alpha[j] && !k; j++)
        {
            if (c[i] == alpha[j])
            {
                _putchar(beta[j]);
                counter++;
                k = 1;
            }
        }
        if (!k)
        {
            _putchar(c[i]);
            counter++;
        }
    }

    return (counter);
}
