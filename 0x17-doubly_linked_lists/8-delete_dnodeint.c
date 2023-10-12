#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int i = 0;

	if (!h)
		return (-1);
	if (h->next == NULL && h->prev == NULL)
	{
		free(*head);
		*head = h = NULL;
		return (1);
	}

	if (index == 0)
	{
		h = h->next;
		free(*head);
		h->prev = NULL;
		*head = h;
		return (1);
	}
	for (i = 0; i < index; ++i)
	{
		if (!h)
			return (-1);
		h = h->next;
	}
	if (h->next == NULL)
	{
		h->prev = NULL;
		free(h);
		return (1);
	}
	else
	{
		h->prev->next = h->next;
		h->next->prev = h->prev;
		free(h);
		return (1);
	}
	return (-1);
}
