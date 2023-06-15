#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
  * _isalpha -  function that checks for lowercase character.
  *  @c: char type letter
  * Return: 1 or 0
  */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
