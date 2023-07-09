#include "hash_tables.h"

// void mallocate()

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(hash_node_t));
    if (ht == NULL)
    {
        return NULL;
    }
    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t) * size);
    if (ht->array == NULL)
    {
        return NULL;
    }
    return ht;
}

