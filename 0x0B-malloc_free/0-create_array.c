#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* create_array - creates an array of chars and initializes it
* @size: the size that main function sends us
* @c: the character we are sent.
*
* Description: use malloc and argc argv to achieve goal
*	returns null if size is zero. returns a
*	pointer to the array or NULL if it fails.
* Return: the pointer if successful, NULL if not
*/

char *create_array(unsigned int size, char c)
{
char *ch_arr = (char*) malloc(size * sizeof(c));
ch_arr[0] = c;
if (size == 0)
{
return NULL;
}
if (ch_arr == NULL)
{
return NULL; 
}
return ch_arr;
}
