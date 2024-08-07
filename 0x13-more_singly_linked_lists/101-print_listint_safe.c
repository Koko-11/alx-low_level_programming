#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;
	int loop_detected = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	if (slow == fast)
	{
		loop_detected = 1;
		break;
	}
	}

	slow = head;
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

	if (loop_detected && slow == fast)
	{
		slow = slow->next;
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		break;
	}

		slow = slow->next;
	}

	if (slow == NULL && loop_detected)
	{
		exit(98);
	}

	return (count);
}
