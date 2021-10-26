#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to grid
 * width of height and initialized with 0
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: addr of grid
 **/
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	j = 0;

	a = malloc(height * (sizeof(int) * width));

	if (a == NULL)
	{
		return (NULL);
	}

	while (j < width)
	{
		a[j] = malloc(sizeof(int));
		j++;
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}

	}
	return (a);
}
