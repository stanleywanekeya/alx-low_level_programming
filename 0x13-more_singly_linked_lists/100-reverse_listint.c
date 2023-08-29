#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: first node in list
 * Return: the first node in list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = next = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
