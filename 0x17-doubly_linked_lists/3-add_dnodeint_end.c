#include "lists.h"

/**
 * add_dnodeint_end - add node dbl linked list int
 * @head: head
 * @n: val of node
 *
 * Return: adrr
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *curr;

if (new == NULL)
return (NULL);

else
{
new->n = n;
if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
*head = new;
}
else
{
curr = *head;
while (curr->next != NULL)
{
curr = curr->next;
}
curr->next = new;
new->prev = curr;
new->next = NULL;
}
}
return (new);
}
