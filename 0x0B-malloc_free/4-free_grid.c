#include "main.h"

/**
 * free_grid - frees previously created 2 dimensional grid
 * @grid: pointer to location in memory
 * @height: number of rows affected
 *
 * Return: nothing, void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
