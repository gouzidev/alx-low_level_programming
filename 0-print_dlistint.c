#include "lists.h"


/**
 * print_dlistint - print a dbl linked list int
 * @h: head
 *
 * Return: size
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *curr = h;
size_t i = 0;
while (curr)
{
printf("%i\n", curr->n);
curr = curr->next;
i++;
}
return (i);
}
