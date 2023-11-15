#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Type char pointer
 * Return: c.
*/

int _strlen(char *s)
{
    int c = 0;

    while (s[c] != '\0')
    {
        c++;
    }

    return (c);
}

/**
 * _strlenc - Strlen function
 * @s: Type const char pointer
 * Return: c
*/

int _strlenchar(const char *s)
{
    int c = 0;

    while (s[c] != '\0')
    {
        c++;
    }

    return (c);
}
