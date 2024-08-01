#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * add_node_end - adds a new node at the end of a list
  * @head: the first linked list
  * @str: the string to add to the node
  *
  * Return: the address of the new element or NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}

/**
  * _strlen - gets the length of a string
  * @s: string
  *
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int k = 0;

	while (*s)
	{
		s++;
		k++;
	}

	return (k);
}
