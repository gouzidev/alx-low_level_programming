#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: pointer to copy
 * @owner: pointer to copy
 * @age: float  type
 * Return: to dog_t or NULL if it fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int name_r = 0, owner_r = 0;
dog_t *new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (new_dog);
while (name[name_r])
name_r++;
while (owner[owner_r])
{
	owner_r++;
}
new_dog->name =  malloc(sizeof(char) * (name_r + 1));
new_dog->owner = malloc(sizeof(char) * (owner_r + 1));
if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}
name_r = 0;
while (name[name_r])
{
new_dog->name[name_r] = name[name_r];
name_r++;
}
owner_r = 0;
while (name[name_r])
{
new_dog->owner[owner_r] = owner[owner_r];
owner_r++;
}
new_dog->name[name_r] = 0;
new_dog->owner[owner_r] = 0;
new_dog->age = age;
return (new_dog);
}
