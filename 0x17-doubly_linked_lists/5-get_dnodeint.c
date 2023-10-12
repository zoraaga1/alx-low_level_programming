#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 * Return: the nth node
 *          or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	count = 0;
	current = head;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (count == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
