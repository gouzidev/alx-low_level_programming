#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: counterber of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t counter = 0;
long int mem_diff;

while (head != NULL)
{
mem_diff = head - head->next;
counter++;
printf("[%p] %d\n", (void *)head, head->n);

if (mem_diff <= 0)
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
else
{
head = head->next;
}
}
return (counter);
}
