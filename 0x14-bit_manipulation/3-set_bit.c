#include "main.h"



/**
 * set_bit - An fxn that will set value of a bit to 1 at given index
 * @n: pTR to the val for index
 * @index: Indx of the target bit.
 * Return: 1 if success, then -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
