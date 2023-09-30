#include "main.h"
#include <stdio.h>




/**
 * get_bit - Receive the val of a bit at a given index.
 * @n: Unsigned int number that is long
 * @index: index of the bit that will be retrieved.
 * Return: The value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
