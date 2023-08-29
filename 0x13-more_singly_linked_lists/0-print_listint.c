#include "lists.h"

/**
 * print_listint - prints the elements and the number
 * @h: pointer to linked lists
 * Return: count of elements in list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		++count;
		h = h->next;
	}
	return (count);
}
