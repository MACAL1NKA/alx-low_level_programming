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
if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
