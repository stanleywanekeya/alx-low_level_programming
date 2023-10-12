#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *move = h;

	if (move == NULL)
		return (0);
	while (move->prev)
	{
		move = move->prev;
	}
	while (move)
	{
		++count;
		move = move->next;
	}
	return (count);
}
