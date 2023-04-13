#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == NULL)
{
  printf("problem");
 exit(98);
}
return (ptr);
}
