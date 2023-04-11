#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - allocates a arr, make space and free space
 * @grid: test
 * @height: height of arr
 * Return: arr with freed spaces
 */

void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
free(grid[i]);
}
free(grid);
}
