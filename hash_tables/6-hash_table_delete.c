#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *next;

	if (ht == NULL)
		return;

	i = 0;

	while (i < ht->size)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			next = current->next;

			free(current->key);
			free(current->value);
			free(current);

			current = next;
		}

		i++;
	}

	free(ht->array);
	free(ht);
}
