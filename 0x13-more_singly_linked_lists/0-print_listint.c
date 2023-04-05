#include "lists.h"

/**
 * print_listint - prints all the element of listint_t list.
 * @h: pointer to the list
 *
 * Return: the number of node in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
