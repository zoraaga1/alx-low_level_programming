#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer of type list_t
 * @n: a pointer to a constant integer
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_nodeint(listint_t **head, const int *n)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = strdup(n);
	if (new_node->n == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

