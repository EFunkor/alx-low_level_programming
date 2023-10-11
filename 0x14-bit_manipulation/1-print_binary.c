#include <stdio.h>

/**
 * print_binary - fxn that will print the binary rep, of a nbr.
 * @n: no. to be printed when changed to bin.
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(
		    n >> 1); /* move n by 1 to process the next bit */


	putchar((n & 1) + '0');
}
