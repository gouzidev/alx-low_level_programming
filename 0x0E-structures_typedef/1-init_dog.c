#include "dog.h"

/**
 * init_dog - variable type struct dog
 *
 * @d: pointer ->  struct dog
 * @name:  to the variable char type
 * @age: int type
 * @owner: a type char variable
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		*(d).name = name;
		*(d).age = age;
		*(d).owner = owner;
	}
}
