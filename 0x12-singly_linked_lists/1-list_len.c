#include "lists.h"

/**
 * list_len - A funct that gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of nodes as the size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
