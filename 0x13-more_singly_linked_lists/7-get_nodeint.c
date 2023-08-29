#include "lists.h"

/**
 * get_nodeint_at_index - get's the nth node
 * @head: pointer to head of list
 * @index: the nth index of list
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n;

	temp = head;
	n = 0;
	while (temp && n < index)
	{
		temp = temp->next;
		++n;
	}
	return (temp ? temp : NULL);
}
