#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: input integer
 * @height: input integer
 * Return:  pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int k, l, m, n;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);
	b = malloc(sizeof(int *) * height);

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		b[k] = malloc(sizeof(int) * width);
		if (b[k] == NULL)
		{
			for (l = k; l >= 0; l--)
			{
				free(b[l]);
			}
			free(b);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			b[m][n] = 0;
		}
	}
	return (b);
}
