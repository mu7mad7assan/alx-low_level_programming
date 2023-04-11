#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function used to make a grid using nested loop
 * @width: width-prop input
 * @height: height-prop input
 * Return: pointer to 2 dimension array
 */
int **alloc_grid(int width, int height)
{
	int **memo;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	memo = malloc(sizeof(int *) * height);

	if (memo == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		memo[x] = malloc(sizeof(int) * width);

		if (memo[x] == NULL)
		{
			for (; x >= 0; x--)
				free(memo[x]);

			free(memo);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			memo[x][y] = 0;
	}

	return (memo);
}
