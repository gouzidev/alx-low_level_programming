#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
  * _islower -  function that checks for lowercase character.
  *  @c: char type letter
  * Return: 1 or 0
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
