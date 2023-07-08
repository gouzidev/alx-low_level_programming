#include "hash_tables.h"
/**
 * hash_table_create - creates a hash tables
 * @size: the array (hash table) size
 * Return: a  pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;

	if (size == 0)
		return (NULL);

	arr = calloc(1, sizeof(hash_table_t));

	if (arr == NULL)
		return (NULL);

	arr->size = size;

	arr->array = calloc(size, sizeof(hash_table_t **));

	if (arr->array == NULL)
	{
		free(arr);
		return (NULL);
	}

	return (arr);
}
