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

	a = malloc(sizeof(int*) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < height)
	{
		a[j] = malloc(sizeof(int) * width);
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
