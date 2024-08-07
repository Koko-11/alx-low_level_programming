#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list, even if it contains a loop.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast, *temp;

	if (!h || !*h)
	return (0);

	slow = *h;
	fast = *h;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	if (slow == fast)
	{
		slow = *h;
	while (slow != fast)
	{
		temp = slow;
		slow = slow->next;
		free(temp);
		count++;
	}
	while (fast->next != slow)
	{
		temp = fast;
		fast = fast->next;
		free(temp);
		count++;
	}
	free(slow);
	count++;
	*h = NULL;
	return (count);
	}
	}

	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	*h = NULL;
	return (count);
}
