#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_last_digit -  function that checks for lowercase character.
  * @n: int type letter
  * Return: 1 or 0
  */


int print_last_digit(int n)
{
	printf("%i", ((abs(n) % 10) * 11));
	return ((abs(n) % 10) * 11);
}
