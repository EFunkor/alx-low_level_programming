#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make the grid
 * @width: Width inputs
 * @height: Height inputs
 * Return: Pointer to a 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int j, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		mee[j] = malloc(sizeof(int) * width);

		if (mee[j] == NULL)
		{
			for (; j >= 0; j--)
				free(mee[j]);

			free(mee);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (b = 0; b < width; b++)
			mee[j][b] = 0;
	}

	return (mee);
}

