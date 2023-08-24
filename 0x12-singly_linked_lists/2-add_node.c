#include "lists.h"

/**
 * add_node - adds node to the tail of the list
 * @head: pointer to linked list
 * @str: pointer to string
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len;

	while (str[len])
		++len;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
