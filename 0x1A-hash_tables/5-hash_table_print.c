#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * Return: void (prints the hash or nothing if is NULL)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *number_hash;
	unsigned int count = 0;
	unsigned long int x;
	/*long unsigned int lenght;*/

	/* if NULL returns void and prints nothing just {} */
	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		number_hash = ht->array[x];
		/*lenght = sizeof(ht->array) / sizeof(char);*/
		/*number_hash = ht->array[lenght];*/
		while (number_hash)
		{
			if (count)
				printf(", ");
			printf("'%s': '%s'", number_hash->key, number_hash->value);
			number_hash = number_hash->next;
			count++;
		}
	}
	printf("}\n");
}
