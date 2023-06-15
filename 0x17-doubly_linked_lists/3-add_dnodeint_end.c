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
dlistint_t *first = *head;

new->n = n;
new->next = NULL;
new->prev = NULL;

if ((*head) == NULL)
{
    (*head) = new;
}
else {
    while ((*head)->next)
    {
        *head = (*head)->next;
    }
    (*head)->next = new;
    new->prev = *head;
    *head = first;
}
return (new);
}
