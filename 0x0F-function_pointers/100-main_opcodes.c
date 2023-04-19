#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the opcodes of its own main function
 *
 * @argv: the argument that enters to the program
 * @argc: counts the number of arguments
 *
 * Return: the opcode hex number
 */

int main(char argc, char *argv[])
{
int n_bytes;
int i = 0;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
n_bytes = atoi(argv[1]);
if (n_bytes < 0)
{
printf("Error\n");
exit(2);
}
while (i < n_bytes)
{
printf("%02hhx", *((char *)(main + i)));
i++;
if (i != n_bytes)
{
printf(" ");
}
}
printf("\n");
return (0);
}
