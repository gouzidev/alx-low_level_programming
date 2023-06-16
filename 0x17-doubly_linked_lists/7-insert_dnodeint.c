#include "lists.h"

/**
 * insert_dnodeint_at_index - inserrtt
 * @h: head
 * @idx: idx
 * @n: n
 *
 * Return: adrr
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *curr = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (idx == 0)
{
if (*h != NULL)
(*h)->prev = new;
new->next = *h;
*h = new;
return (new);
}
while (curr != NULL)
{
if (i == idx - 1)
{
new->prev = curr;
new->next = curr->next;
if (curr->next != NULL)
curr->next->prev = new;

curr->next = new;
return (new);
}
curr = curr->next;
i++;
}
return (NULL);
}
