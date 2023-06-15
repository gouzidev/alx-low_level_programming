#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
