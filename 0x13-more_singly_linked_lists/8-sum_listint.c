#include "lists.h"

/**
 * sum_listint - sum up all the data of a linked list
 * @head: head of a linked list
 *
 * Return: sum
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
