#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * Description : idk lol
 * main - check the code.
 * @c : param given of tyope char
 * Return: Always 0.
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
