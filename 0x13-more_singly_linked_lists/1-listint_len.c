#include"lists.h"
/**
 * listint_len - number of elements
 * @h: linked list to tranverse
 * Return: no. of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
