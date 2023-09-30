#include "main.h"


/**
 * clear_bit - FXN to set the val of a bit to zero at  given index
 * @n: pntr to the value
 * @index: index of the target bit that will clear.
 * Return: 1 on succes or, -1 if error must occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
