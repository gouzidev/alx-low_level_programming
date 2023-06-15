#include "lists.h"


/**
 * dlistint_len - len dbl linked list int
 * @h: head
 *
 * Return: len
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *curr = h;
size_t i = 0;
while (curr)
{
curr = curr->next;
i++;
}
return (i);
}
