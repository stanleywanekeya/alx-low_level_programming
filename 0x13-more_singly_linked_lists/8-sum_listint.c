#include "lists.h"

/**
 * sum_listint - return sum of int in list
 * @head: points to head node in list
 * Return: sum of int in list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
