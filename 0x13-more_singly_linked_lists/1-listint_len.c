#include "lists.h"

/**
 * listint_len - prints number of elements
 * @h: pointer to linked list
 * Return: returns number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		++count;
	}
	return (count);
}
