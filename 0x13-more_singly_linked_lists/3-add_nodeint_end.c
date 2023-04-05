#include "lists.h"

/**
 * add_nodeint_end - add a new node at the begining of a linked list
 * @head: list head
 * @n: interger 
 *
 * Return: NULL if function fail.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;

		return (new);
	}
}
