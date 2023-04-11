#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - get ends of input and add together for size
* @width: input one to concat
* @height: input two to concat
* Return: concat of s1 and s2
**/

int **alloc_grid(int width, int height)
{
int **grid = malloc(height * sizeof(int *));
int i = 0;
int j = 0;

if (width <= 0 || height <= 0)
{
return (NULL);
}
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = calloc(width, sizeof(int));
if (grid[i] == NULL || grid == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
return (grid);
}


