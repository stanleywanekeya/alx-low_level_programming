#include "lists.h"

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
