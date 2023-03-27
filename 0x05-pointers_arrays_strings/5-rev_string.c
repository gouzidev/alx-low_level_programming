#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - oco
 * @s : pointer
 * Description: Uses stuf
 * Return: void.
**/

void rev_string(char *s)
{
	int lenS = strlen(s);
	int i;
	char newStr[strlen(s)];
	int j = 0;

	for (i = (lenS - 1); i >= 0; i--)
	{
		newStr[i] = s[i];
		j++;
	}
	s = newStr;
}
