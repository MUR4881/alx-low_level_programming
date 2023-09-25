#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously allocated by alloc_grid()
 * @grid: pointer to the grid
 * @height: the total number of array of the grid
 */
void free_grid(int **grid, int height)
{
	(void) (height);
	free(*grid);
	free(grid);
}

