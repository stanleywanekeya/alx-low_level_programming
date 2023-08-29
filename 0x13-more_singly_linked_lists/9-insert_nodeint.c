#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to the first node in list
 * @idx: index to insert node
 * @n: value of int in node
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	i = 0;
	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);
	temp = *head;
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < idx - 1)
	{
		temp = temp->next;
		++i;
	}
	if (i == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
