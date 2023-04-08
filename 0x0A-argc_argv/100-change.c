#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: str 1
* @argv: str 2
* Return: 0
*/

int main(int argc, char *argv[])
{
int n;
int sum = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

n = atoi(argv[argc - 1]);

if (n < 0)
{
printf("%d\n", 0);
return (0);
}
if (n >= 25)
{
sum += n / 25;
n = n % 25;
}
if (n >= 10)
{
sum += n / 10;
n = n % 10;
}

if (n >= 5)
{
sum += n / 5;
n = n % 5;
}
if (n >= 2)
{
sum += n / 2;
n = n % 2;
}
sum += n;
printf("%d\n", sum);
return (0);
}
