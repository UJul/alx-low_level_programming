#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i += 2;
    }
    
    putchar('\n');
}
