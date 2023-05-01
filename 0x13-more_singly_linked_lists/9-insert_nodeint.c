#include "lists.h"

/**
 * insert_nodeint_at_index - sdsd.
 * @head: double pointer to the head of the listint_t list.
 * @idx: i.
 * @n: n.
 * Return: ptr
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int counter;
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *curr = *head;
listint_t *prev = *head;

if (new_node == NULL)
return (NULL);

new_node->n = n;
counter = 0;

/* if idx = 0 */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
/* else */
while (curr != NULL && counter != idx - 1)
{
counter++;
curr = curr->next;
}
if (counter == idx)
{
new_node->next = curr->next;
curr->next = new_node;
return (new_node);
}
free(new_node);
return (NULL);
}
