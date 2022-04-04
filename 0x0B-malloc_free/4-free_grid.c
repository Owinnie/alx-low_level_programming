#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - 2D grid
  * @grid: para1
  * @height: para2
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
