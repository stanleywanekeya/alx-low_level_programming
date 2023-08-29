#include "lists.h"

/**
 * free_listint2  - frees linked lists
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
