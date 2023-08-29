#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head;
	listint_t *curr = head;

	if (!head)
		return (NULL);
	while (prev && curr && curr->next)
	{
		curr = curr->next->next;
		prev = prev->next;
		if (curr == prev)
		{
			prev = head;
			while (prev != curr)
			{
				prev = prev->next;
				curr = curr->next;
			}
			return (curr);
		}
	}
	return (NULL);
}
