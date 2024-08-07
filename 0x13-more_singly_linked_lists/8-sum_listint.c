#include "lists.h"

/**
 * sum_listint - sums up all data in a linked list
 * @head: Pointer to the head of the list.
 *
 * Return: sum of all the data or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
