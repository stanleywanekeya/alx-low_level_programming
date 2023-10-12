#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;

	while (h->next)
	{
		h = h->next;
		free(head);
		head = h;
	}
	free(head);
	head = h = NULL;
}
