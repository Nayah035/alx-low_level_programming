#include "lists.h"
/**
 * get_nodeint_at_index - This is the node returner in index format.
 *
 * @head: the 1st node.
 *
 * @index: points out the node to return.
 *
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *xyz = head;

	while (xyz && q < index)
	{
		xyz = xyz->next;
		q++;
	}

	return (xyz ? xyz : NULL);
}
