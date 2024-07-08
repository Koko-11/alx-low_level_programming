#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: memory area to be filled
 * @b: byte to fill the memory area with
 * @n: no of bytes to be filled
 *
 * Return: A pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}
