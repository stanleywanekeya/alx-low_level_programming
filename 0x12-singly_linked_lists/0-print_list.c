#include "lists.h"

/**
 * print_list - prints the linked list
 * @h: linked list pointer
 * Return: count of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++count;
	}
	return (count);
}
