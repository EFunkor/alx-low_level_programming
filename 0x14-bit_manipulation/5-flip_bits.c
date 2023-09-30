#include "main.h"



/**
 * flip_bits - an fxn to return bits number needed to move to others.
 * @n: first, also as initial number
 * @m: the final No or second number unsigned.
 * Return: NUMr, number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int NUMr = 0;
	unsigned long int f_result = n ^ m;

	while (f_result)
	{
		NUMr += f_result & 1;
		f_result >>= 1;
	}
	return (NUMr);
}
