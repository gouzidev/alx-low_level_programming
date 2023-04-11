#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a arr, make space and free space
 * @width: takes in width of arr
 * @height: height of arr
 * Return: arr with freed spaces
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (width * height <= 0)
{
return (NULL);
}

arr = (int **) malloc(sizeof(int *) * height);

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
i = 0;
while (i < height)
{
free(arr[i]);
}
free(arr);
return (NULL);
}
}
for (i = 0; j < width; j++)
{
arr[i][j] = 0;
}
return (arr);
}
