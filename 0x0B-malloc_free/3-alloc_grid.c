#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - get ends of input and add together for size
* @width: input one to concat
* @height: input two to concat
* Return: concat of s1 and s2
**/

int **alloc_grid(int width, int height)
if (width * height <= 0)
{
return (NULL);
}
int **twoDArr = malloc(height * sizeof(int *));
if (twoDArr == NULL)
{
return (NULL);
}
for (int i = 0; i < height; i++) {
twoDArr[i] = calloc(width, sizeof(int));
if (twoDArr[i] == NULL) {
for (int j = 0; j < i; j++) {
free(twoDArr[j]);
}
free(twoDArr);
return (NULL);
}
}
return (twoDArr);
}
