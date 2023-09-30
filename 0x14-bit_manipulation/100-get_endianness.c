#include "main.h"


/**
 * get_endianness - FOR CheckN the sys endianness of the system.
 * Return: 0 if Large endian, or 1 if Lil endian.
 */
int get_endianness(void)
{
	/* make q be unsigned int var */
	unsigned int q = 1;
	
	/* lets asume that p is the bytes ofa multi byte type of data */
	
	char *p = (char *)&q;


	return ((int)*p);
}
