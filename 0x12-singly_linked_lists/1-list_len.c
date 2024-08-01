#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * list_len - the number of elements in a linked list
  * @h: the linked list
  *
  * Return: The number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
