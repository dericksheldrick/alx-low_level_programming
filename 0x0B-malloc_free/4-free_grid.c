#include"main.h"
#include<stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @height: input integers
 * @grid: input integers
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}
	free(grid);
}
