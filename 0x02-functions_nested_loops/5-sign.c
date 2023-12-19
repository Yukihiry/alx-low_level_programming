#include "main.h"
/*
 * Description: rite a function that prints the sign of a number.
 *
 * Return: Returns 1 and prints + if n is greater than zero
 * Returns 0 (sucesss) if n is zero Returns -1 and prints - if n is less than zero
 */

	int print_sign(int n)
{
	if ( n > 0 )
{
	putchar (43);
	return (1);
}
	else if ( n = 0)
{
	putchar(48);
	return (0);
}	
	else ( n < 0 )
{
	putchar (45);
	return (-1);
	}
}
