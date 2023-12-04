#include "hash_tables.h"

/**
 * key_index - A function that provides the index of a key
 * @key: the key
 * @size: the size of the array of hash tables
 * Return: Index at which key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	if (key == NULL || size == 0)
		return (0);

	/* to calculate the hash code for the key*/
	hash_code = hash_djb2(key);

	 /* use modulo to get the index within the array size */
	return (hash_code % size);
}
