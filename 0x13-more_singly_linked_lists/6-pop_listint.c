#include "lists.h"

/**
 * pop_listint - frees a listint_t list and sets head to NULL.
 * @head: double pointer to the head of the listint_t list.
 * Return - int
 */
int pop_listint(listint_t **head)
{
int popped = 0;
listint_t *temp;

if (*head == NULL)
{
return (popped);
}
else
{
popped = (*head)->n;
/* one element */
if ((*head)->next == NULL)
{
*head = NULL;
free(*head);
}
else
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
return (popped);
}
