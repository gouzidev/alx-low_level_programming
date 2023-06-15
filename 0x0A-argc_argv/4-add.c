#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints its name follwoed by a newline
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: prints the current directory and the name like ./name
* Return: returns the name.
*/

int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;

while (i < argc)
{
int j = 0;

while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}
