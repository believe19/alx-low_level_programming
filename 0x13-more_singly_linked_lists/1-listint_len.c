#include "lists.h"

/**
 * listint_len - returns the number of element of listint_t list.
 * @h: pointer to the list
 *
 * Return: the number of node in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

