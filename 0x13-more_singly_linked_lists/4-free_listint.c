#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
