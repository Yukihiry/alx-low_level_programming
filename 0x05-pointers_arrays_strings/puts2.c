#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
    int i = 0;

    // Step 1: Loop through the string
    while (str[i] != '\0')
    {
        // Step 2: Print characters at even indices (0, 2, 4, ...)
        putchar(str[i]);

        // Step 3: Move to the next character (skip one character)
        i += 2;
    }

    // Step 4: Print a new line after printing every other character
    putchar('\n');
}
