#include "lists.h"

/**
 * list_len - counts the number of elements in a list
 * @h: pointer to a node
 * Return: number of elements in a node
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		++count;
		h = h->next;
	}
	return (count);
}
