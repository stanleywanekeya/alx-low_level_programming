#include "lists.h"

/**
 * free_dlistint - frees elements in a list
 * @head: list to be freeed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;

	if (head == NULL)
		return;
	while (h->next)
	{
		h = h->next;
		free(head);
		head = h;
	}
	free(head);
	head = h = NULL;
}
