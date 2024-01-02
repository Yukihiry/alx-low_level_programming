#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        // Print characters at even indices (0, 2, 4, ...)
        putchar(str[i]);

        // Move to the next character (skip one character)
        i += 2;
    }

    // Print a new line after printing every other character
    putchar('\n');
}
