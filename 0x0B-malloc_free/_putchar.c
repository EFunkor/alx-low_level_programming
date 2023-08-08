#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: Character tO Print
 *
 * Return: Success 1.
 * On error, -1  returned, and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

