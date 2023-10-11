#include "main.h"


/**
 * get_endianness - fxn fr endianness checks.
 * Return: 0 if big end, 1 if little end.
 */

int get_endianness(void)
{
	/* say k is unsigned int variable */
	unsigned int k = 1;


	/* say y as bytes of the multi byte data sample */
	char *w = (char *)&k;

	return (*w == 1);
}
