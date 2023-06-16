#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index od a DLL
 * @head: double pointer to the head of the list
 * @index: the node that should be delete
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *prev;
dlistint_t *curr = *head;

if (*head == NULL)
return (-1);

while (curr)
{
if (index == 0)
{
if ((*head)->next == NULL)
{
*head = NULL;
return (1);
}
*head = (*head)->next;
(*head)->prev = NULL;
return (1);
}
if (i == index)
{
prev = curr->prev;
/* if its the last */
if (curr->next == NULL)
{
prev->next = NULL;
free(curr);
return (1);
}
curr->next->prev = prev;
prev->next = curr->next;
free(curr);
return (1);

}
i++;
curr = curr->next;
}
return (-1);
}
