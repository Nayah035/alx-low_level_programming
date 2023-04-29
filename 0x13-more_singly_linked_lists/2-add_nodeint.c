#include "lists.h"
/**
 * add_nodeint - this adds new node at the start of a linked list.
 * @head: pointer of 1st node in a list.
 * @n: insert
 * Return: pointer or null if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num;

	num = malloc(sizeof(listint_t));
	if (!num)
	{
		return (NULL);
	}
	num->n = n;
	num->next = *head;
	*head = num;
	return (num);
}
