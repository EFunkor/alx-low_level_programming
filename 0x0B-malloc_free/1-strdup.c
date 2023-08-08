#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup – To duplicate to a new memory space location
 * @str: char
 * Return: To 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int x, q = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	aaa = malloc(sizeof(char) * (x + 1));

	if (aaa == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		aaa[q] = str[q];

	return (aaa);
}

