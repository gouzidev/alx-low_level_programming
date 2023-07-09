#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: hash table size
 * Return: hash table created
 * Description: good smart function
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;

if (size == 0)
{
return (NULL);
}

ht = malloc(sizeof(hash_node_t) + 1);

if (ht == NULL)
{
return (NULL);
}
ht->size = size;
ht->array = malloc((sizeof(hash_node_t) * size) + 1);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
return (ht);
}

