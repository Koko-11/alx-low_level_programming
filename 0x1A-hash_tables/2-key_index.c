#include "hash_tables.h"

/**
 * key_index - gives index of the key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: generated index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
