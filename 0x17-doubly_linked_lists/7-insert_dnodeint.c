#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 *								at a given position in the list.
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Integer value to store in the new node
 *
 * Return: the address of the new node,
 *          or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		free(new_node);
		return (NULL);
	}
	dlistint_t *current = *h;

	for (unsigned int i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
