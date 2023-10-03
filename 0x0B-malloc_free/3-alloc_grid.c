#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to array (2d)
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));

	while (g == NULL)
	{
		free(g);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);

		while (g == NULL)
		{
			for (; i >= 0; i--)
				free(g[i]);

			free(g);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}

