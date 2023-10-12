#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: list where the operation takes place
 * @n: integer content for the node
 * Return: the new node added
 */
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
