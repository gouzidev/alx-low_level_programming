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
int i = 0;
int j = 0;
int **arr = (int **)malloc(width * sizeof(int *));
for (i = 0; i < 3; i++)
{
arr[i] = (int *)malloc(height * sizeof(int));
}
for (i = 0; i < width; i++) {
for (j = 0; j < height; j++) {
arr[i][j] = i * j;
}
}
 for (i = 0; i < width; i++) {
for (j = 0; j < height; j++) {
printf("%d ", arr[i][j]);
}
printf("\n");
}

// free the memory
for (i = 0; i < width; i++) {
free(arr[i]);
}
free(arr);

return (0);
}
