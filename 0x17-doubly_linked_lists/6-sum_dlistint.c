#include "lists.h"

/**
 * sum_dlistint - adds the sum of the contents in a list
 * @head: list where an operation takes place;
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
