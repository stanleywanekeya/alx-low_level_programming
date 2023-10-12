#include "lists.h"

/**
 * get_dnodeint_at_index - get nodes at indec
 * @head: list to be searched for index
 * @index: index at the list
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h = head;

	for (i = 0; i < index; ++i)
	{
		if (!h)
			return (NULL);
		h = h->next;
	}
	return (h);
}
