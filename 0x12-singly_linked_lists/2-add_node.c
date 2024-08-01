#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node - adds a new node at the beginning of a list
  * @head: the first linked list
  * @str: the string to be added to the node
  *
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - calculates the length of a string
  * @s: String
  *
  * Return: length of a string
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
