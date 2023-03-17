#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
  * main - Entry point
  * Description:Positive anything is better than negative nothing
  * Return: 0 (success)
*/
int main(void)
{
	int n, reminder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes there */
	reminder = n % 10;
	if (reminder > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, reminder);
	else if (reminder == 0)
		printf("Last digit of %i is %i and is 0\n", n, reminder);
	else if (reminder < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, reminder);
	return (0);
}
