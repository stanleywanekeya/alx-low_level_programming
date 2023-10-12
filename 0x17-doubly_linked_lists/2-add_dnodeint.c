#include "lists.h"

/**
 * add_dnodeint - adds to front of list
 * @head: list of operation
 * @n: integer content of the node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
	}
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
