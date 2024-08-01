#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a list.
  * @head: The first linked list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
