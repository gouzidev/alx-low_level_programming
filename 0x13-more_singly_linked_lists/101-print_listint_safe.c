#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, handles loops
 * @head: Pointer to the beginning of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
const listint_t *loop_start;
size_t count = 0;

if (!head)
exit(98);

current = head;
while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
current = current->next;

if (current >= loop_start)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}

if (current == head)
loop_start = head;

}

return (count);
}
