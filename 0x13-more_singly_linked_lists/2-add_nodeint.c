#include "lists.h"

/**
 * add_nodeint - adds new list at the beginning
 * @head: linked list head pointer
 * @n: integer argument
 * Return: the new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	return (new);
}
