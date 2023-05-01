#include "lists.h"

/**
 * pop_listint - frees a listint_t list and sets head to NULL.
 * @head: double pointer to the head of the listint_t list.
 */
int pop_listint(listint_t **head)
{
listint_t *popped;
if (*head == NULL)
{
return (0);
}
else
{
popped = *head;
*head = (*head)->next;
return (popped->n);
}
}
