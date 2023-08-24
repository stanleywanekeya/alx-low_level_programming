#include "lists.h"

/**
 * add_node_end - Adds node to the end of the list
 * @head: pointer to the first list
 * @str: pointer to string
 * Return: the last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	unsigned int len;

	len = 0;
	temp = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	while (str[len])
		++len;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
