#include "lists.h"

/**
 * list_len - returns the number of elements in a list.
 * @h: singly linnked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t night;

	night = 0;

	while (h != NULL)

	{
		h = h->next;

		night++;
	}

	return (night);

}
