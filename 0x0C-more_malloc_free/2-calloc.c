#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size
 *
 * Return: a pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, t;

	if (nmemb == 0 || size == 0)
	return (NULL);

	t = nmemb * size;
	p = malloc(t);
	
	if (p == NULL)
		return (NULL);

	for (i = 0; i < t; i++)
		p[i] = 0;

	return (p);
}
