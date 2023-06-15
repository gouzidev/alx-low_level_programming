#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index od a DLL
 * @head: double pointer to the head of the list
 * @index: the node that should be delete
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *first = *head;

if (*head == NULL)
{
return (-1);
}

while (index > 0)
{
if (first == NULL)
return (-1);
first = first->next;
index--;
}
if (first == *head)
{
*head = first->next;
(*head)->prev = NULL;
}
else
{
first->prev->next = first->next;
if (first->next)
{
first->next->prev = first->prev;
}
}
free(first);
return (1);
}
