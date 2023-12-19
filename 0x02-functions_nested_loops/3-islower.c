#include "main.h"
/*Description: is lower fucion to check if character is lowercase
 *
 * Return: Return 1 if 'c' lowercass otherwise always 0 (success)
 *
 */

int _islower(int c)
{
if (c >=97 && c<=122)
	return (1);
	return (0);
}
