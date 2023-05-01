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
listint_t *curr;
listint_t *new_node;
unsigned int counter;

counter = 0;
/* allocate memory for the new_node */
new_node = malloc(sizeof(listint_t));
/* task condition */
if (new_node == NULL)
return (NULL);
/* n keeps being the data of the new node */
new_node->n = n;
/*  given the case, if index is cero then new_node is equal to head */
/* and return new_node in head of the list */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
/* usea de auxiliar */
curr = *head;
/* if index is different to the position */
/* counter counter keeps running and curr moves to the next node */
while (curr != NULL && counter != idx - 1)
{
counter++;
curr = curr->next;
}
/* if index and counter are equal and non NULL */
if (counter == idx - 1 && curr != NULL)
{
new_node->next = curr->next;
curr->next = new_node;
return (new_node);
}
free(new_node);
return (NULL);
}
