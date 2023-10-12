#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	if (*head)
	{
		while ((*head)->prev)
			*head = (*head)->prev;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	else
	{
		*head = new;
	}

	return (new);
}
