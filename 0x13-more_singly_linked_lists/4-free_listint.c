#include "lists.h"
/**
 * free_listint - Used to free a linked list.
 *
 * @head: The lst to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *xyz;

	while (head)
	{
		xyz = head->next;
		free(head);
		head = xyz;
	}
}
