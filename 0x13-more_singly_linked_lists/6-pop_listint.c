#include "lists.h"
/**
 * pop_listint - Used to delete.
 * @head: A pointer.
 * Return: Data that was deleted or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *xyz;
	int new;

	if (!head || !*head)
	{
		return (0);
	}

	new = (*head)->n;
	xyz = (*head)->next;
	free(*head);
	*head = xyz;

	return (new);
}
