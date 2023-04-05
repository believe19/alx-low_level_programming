#include "lists.h"

/**
 * get_nodeint_at_index - return nth of a linked list
 * @head: head of a linked list
 * @index: index 
 *
 * Return: node of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	for (j = 0; j  < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
