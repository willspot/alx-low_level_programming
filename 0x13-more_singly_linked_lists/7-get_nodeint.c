#include "lists.h"

/**
 * get_nodeint_at_index - A function that gets a node of list at specific index
 * @head: A pointer to listint_t structure
 * @index: The index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
