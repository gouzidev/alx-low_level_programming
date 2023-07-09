#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: hash table size
 * Return: hash table created
 * Description: good smart function
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    ht->size = size;
    hash_table_t *ht = malloc(sizeof(hash_node_t));
    if (ht == NULL)
    {
        return (NULL);
    }
    ht->array = malloc(sizeof(hash_node_t) * size);
    if (ht->array == NULL)
    {
        return (NULL);
    }
    return (ht);
}

