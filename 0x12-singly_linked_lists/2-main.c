#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


size_t print_list(const list_t *h)
{
        int nodes_count = 0;
        list_t const *curr = h;

        while (curr)
        {
                nodes_count++;
                if (curr->str != NULL)
                {
                        printf("[%d] %s\n", curr->len, curr->str);
                }
                else
                {
                        printf("[%c] %s\n", '0', "(nil)");
                }
                curr = curr->next;
                }
        return (nodes_count);
}

int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}

