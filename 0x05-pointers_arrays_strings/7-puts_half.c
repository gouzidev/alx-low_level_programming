#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: void is success
**/

void puts_half(char *str)
{
	unsigned int i;
	unsigned int halfLen;
	unsigned int len = strlen(str);

	if ((len % 2) == 0)
	{
		halfLen = len / 2;
	}
	else
	{
		halfLen = (len - 1) / 2;
	}
	if (str[len-1] == '\0')
	{
		len--;
	}
	for (i = halfLen; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
