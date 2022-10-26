#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *y, *x;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	y = head->next;
	x = (head->next)->next;

	while (x)
	{
		if (y == x)
		{
			x = head;
			while (y != x)
			{
				nodes++;
				y = y->next;
				x = x->next;
			}
			y = y->next;
			while (y != x)
			{
				nodes++;
				y = y->next;

			}
			return (nodes);
		}
		y = y->next;
		x = (x->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: Apointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
