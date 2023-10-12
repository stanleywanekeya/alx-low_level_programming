#include "lists.h"

/**
 * print_dlistint - prints list
 * @h: list to be printed
 * Return: count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *move = h;

	if (move == NULL)
		return (count);
	if (move->prev != NULL)
		move = move->prev;
	while (move)
	{
		++count;
		printf("%d\n", move->n);
		move = move->next;
	}
	return (count);
}
