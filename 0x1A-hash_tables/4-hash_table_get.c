#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key.
 * @ht: hash table to be looked at.
 * @key: target key
 * Return: value associated with the element or NULL if key is lost
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	/* Declaring nC as current node */
	hash_node_t *nC;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	nC = ht->array[index];

	while (nC != NULL)
	{
		if (strcmp(nC->key, key) == 0)
		{
			return (nC->value);
		}
		nC = nC->next;
	}
	/* if key cannot be found or is lost */
	return (NULL);
}
