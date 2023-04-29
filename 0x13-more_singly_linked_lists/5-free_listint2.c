#include "lists.h"
/**
 * free_listint2 - Used to free linked lists.
 *
 * @head: This is a pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *xyz;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		xyz = (*head)->next;
		free(*head);
		*head = xyz;
	}
	*head = NULL;
}
