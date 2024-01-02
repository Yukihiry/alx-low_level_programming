#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
    int length = 0;
    int start, end;
    char temp;

    // Step 1: Calculate the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    // Step 2: Reverse the string
    start = 0;
    end = length - 1;

    while (start < end)
    {
        // Swap characters at start and end positions
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        // Move start and end pointers towards each other
        start++;
        end--;
    }
}
