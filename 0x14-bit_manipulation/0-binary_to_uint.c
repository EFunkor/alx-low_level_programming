#include "main.h"


/**
 * binary_to_uint - A fxn converting binary number to an unsigned int
 * @b: A Pnter to string (binary chars)
 * Return: VAL, the converted number, or 0 for invalid character.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int VAL = 0;
	int e = 0;

	if (b == NULL)
		return (0);

	while (b[e] != '\0')
	{
		if (b[e] != '0' && b[e] != '1')
			return (0);
		VAL = VAL * 2 + (b[e] - '0');
		e++;
	}

	return (VAL);
}
