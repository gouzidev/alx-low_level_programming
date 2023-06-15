#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: double pointer to listint_t
 * @n: the number of elements in listint_t
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new_node = malloc(sizeof(listint_t));
listint_t *last = *head;

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

/* if we only have head => attach to head */
if (*head == NULL)
{
*head = new_node;
}
/* else => we have some nodes, get last node and attach it */
else
{
while (last->next)
{
last = last->next;
}
last->next = new_node;
}

return (new_node);
}
