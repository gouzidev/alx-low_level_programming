#include "lists.h"

/**
 * get_nodeint_at_index - frees a listint_t list and sets head to NULL.
 * @head: double pointer to the head of the listint_t list.
 * @index: double pointer to the head of the listint_t list.
 * Return: int
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;

if (head == NULL)
	return (NULL);

index = index + 1;

while (node->next)
{
node = node->next;
index--;
if (index == 1)
{
return (node);
}
}
return (NULL);
}
