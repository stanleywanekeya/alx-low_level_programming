#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *m, *new;	
	unsigned int i = 0;

	m = *h;
	
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	for (i = 0; i < idx; ++i)
	{
		if (!m)
			return (NULL);
		m = m->next;
	}
	new->prev = m->prev;
	m->prev->next = new;
	new->next = m;
	return (new);
}
