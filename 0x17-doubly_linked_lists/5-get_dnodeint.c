#include "lists.h"

/**
 * get_dnodeint_at_index - get node dbl linked list int
 * @head: head
 * @index: val of node
 *
 * Return: adrr
 *
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *curr = head;

if (head == NULL)
{
return (NULL);
}

while (curr)
{
if (i == index)
return (curr);
i++;
curr = curr->next;
}
return (NULL);
}
