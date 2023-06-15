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
dlistint_t *curr = *head;
new->next = NULL;
new->prev = NULL;

if (new == NULL)
return (NULL);

if (*head == NULL)
{
new->n = n;
*head = new;
return (new);
}
else
{
new->n = n;
curr = *head;
while (curr->next != NULL)
{
curr = curr->next;
}
curr->next = new;
new->prev = curr;
new->next = NULL;
}
return (new);
}
