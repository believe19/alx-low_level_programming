#include "lists.h"

/**
 * free_listint2 -free a linked list
 * @head: head of a linked list
 * 
 * Return: no return
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(*head);
	}
	*head = NULL;
}
