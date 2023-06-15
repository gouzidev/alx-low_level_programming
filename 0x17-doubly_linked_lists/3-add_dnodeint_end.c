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

new->n = n;
new->next = NULL;
new->prev = NULL;

if (curr == NULL)
{
    curr = new;
}
if (curr == NULL)
{
    printf("curr stilll nul\n");
}
else {

    printf("GOODDODO D\n");
}
return (new);
}
