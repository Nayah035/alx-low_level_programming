#include "lists.h"
/**
 * add_nodeint_end - This adds a node at the end of a linked list.
 *
 * @head: pointer to the 1st element in the list.
 *
 * @n: insert
 * Return: pointer, or null if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num1;
	listint_t *temp2 = *head;

	num1 = malloc(sizeof(listint_t));
	if (!num1)
		return (NULL);

	num1->n = n;
	num1->next = NULL;

	if (*head == NULL)
	{
		*head = num1;
		return (num1);
	}

	while (temp2->next)
		temp2 = temp2->next;

	temp2->next = num1;

	return (num1);
}
