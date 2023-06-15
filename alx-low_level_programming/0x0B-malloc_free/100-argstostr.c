#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
char *s;
int i;
int j;
int x = 0;
int y = 0;

if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
y++;
}

y = y + ac;

s = malloc(sizeof(char) * y + 1);

if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[x] = av[i][j];
x++;
}
if (s[x] == '\0')
{
s[x++] = '\n';
}
}
return (s);
}

