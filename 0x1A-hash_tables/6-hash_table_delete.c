#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: The hash table to be deleted
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nC, *next_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		nC = ht->array[i];
		while (nC != NULL)
		{
			next_node = nC->next;
			free(nC->key);
			free(nC->value);
			free(nC);
			nC = next_node;
		}
	}
	free(ht->array);
	free(ht);

}

