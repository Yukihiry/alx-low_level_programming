#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
    int length = 0;
    int i, start_index;

    // Step 1: Calculate the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Step 2: Determine the starting index for printing the second half
    start_index = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;

    // Step 3: Print the second half of the string
    for (i = start_index; i < length; i++)
    {
        putchar(str[i]);
    }

    // Step 4: Print a new line after printing the second half
    putchar('\n');
}
