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
dlistint_t *next = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
while (curr)
{
if (idx == 0)
{
curr->prev = new;
new->next = curr;
new->prev = curr->prev;
*h = new;
return (new);
}
if (i == idx - 1)
{
if (!curr->next)
{
curr->next = new;
new->prev = curr;
}
else
{
next = curr->next;
new->prev = curr;
new->next = next;
curr->next = new;
next->prev = new;
}
}
curr = curr->next;
i++;
}
return (NULL);
}
