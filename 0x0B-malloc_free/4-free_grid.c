#include "main.h"
#include <stdlib.h>
/**
 *free_grid - new grid
 *@grid: input grid
 *@height: its hieght
 *Return: new uutpru
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
