#include "main.h"
#include <stdlib.h>
/**
 * create_array - To create an  array of  size and assign char c
 * @size: Array size
 * @c: Char to be assigned
 * Description: To create an  array of  size and assign char c
 * Return: pointer to array, NuLL if failed
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

