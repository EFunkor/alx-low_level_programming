#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: shows int inputs
 * @av: shows double pointer arrays
 * Return: 0 nothing
 */
char *argstostr(int ac, char **av)
{
	int t, j, x = 0, H = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (j = 0; av[t][j]; j++)
			H++;
	}
	H += ac;

	str = malloc(sizeof(char) * H + 1);
	if (str == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
	for (j = 0; av[t][j]; j++)
	{
		str[x] = av[t][j];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	}
	return (str);
}

