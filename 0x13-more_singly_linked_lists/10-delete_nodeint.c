#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodet at index of listint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node should be deleted
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int counter = 0;
listint_t *curr = *head;

/* we have 0 nodes */
if (*head == NULL)
{
return (-1);
}

/* we have more */
if (index == 0)
{
*head = curr->next;
free(curr);
return (1);
}
while (curr)
{

/* reached the element (one more to go)*/
if (counter == index)
{
curr->next = curr->next->next;
return (1);
}
curr = curr->next;
counter++;
}
free(*head);
return (-1);
}
