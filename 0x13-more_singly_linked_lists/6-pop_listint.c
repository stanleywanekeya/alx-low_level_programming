#include "lists.h"

/**
 * pop_listint - removes head node
 * @head: pointer to first node of list
 * Return: value in node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
