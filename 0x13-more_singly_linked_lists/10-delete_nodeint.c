#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodet at index of listint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node should be deleted
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int pos = 0;
listint_t *node;

/* Special case: empty list */
if (*head == NULL)
return (-1);

/* Special case: deleting the head node */
if (index == 0)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}

/* Traverse the list until we find the node at the given index */
while (*head && pos != index - 1)
{
pos++;
head = &(*head)->next;
}

/* If we found the node, delete it */
if (*head && (*head)->next != NULL)
{
node = (*head)->next;
(*head)->next = (*head)->next->next;
free(node);
return (1);
}

/* Failed to find the node */
return (-1);
}
