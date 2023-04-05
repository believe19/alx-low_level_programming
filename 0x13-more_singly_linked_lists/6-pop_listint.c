#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: head of a linked list
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int hnode = 0;
	listint_t *temp;

	if (*head == NULL)
		return (hnode);
	temp = *head;
	hnode= temp->n;
	free(*head);
	*head = temp->next;

	return (hnode);
}
