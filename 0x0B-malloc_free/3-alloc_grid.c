#include <stdlib.h>
#include <stdio.h>

/**
 * allocate - converts memory block to grid
 * @grid: pointer to pointer
 * @index: length of block to be converted to grid
 * @width: of grid
 * @height: of grid
 * Return: (0) indicates success
 */
int allocate(int **grid, int *index, int width, int height)
{
	grid[0] = index;
	if (height == 0)
		return (0);
	allocate(grid + 1, index + width, width, --height);
	return (0);
}
/**
 * initialize - all element of the grid to zero
 * @index: the pointer to the grid in for of an array
 * @size: area of the grid
 * Return: (0) symbolizes success
 */
int  initialize(int *index, int size)
{
	index[size] = 0;
	if (size == 0)
		return (0);
	initialize(index, --size);
	return (0);
}
/**
 * alloc_grid - creates a 2d array given width and height, and initializes to 0
 * @width:  of the grid.
 * @height: of the grid
 * Return: a pointer to the grid (2d array), or NULL signifying failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *index;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	index = malloc(width * height *  sizeof(int));
	grid = malloc((height) * sizeof(int *));
	if ((index == NULL) || (grid == NULL))
		return (NULL);
	allocate(grid, index, width, height);
	initialize(index, (width * height) - 1);
	return (grid);
}
