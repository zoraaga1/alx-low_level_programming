#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node
 *								at a specified index in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to delete,
 *          starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && cursor)
		{
			cursor = cursor->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && cursor)
		{
			if (cursor->next)
				cursor->next->prev = cursor->prev;
			if (cursor->prev)
				cursor->prev->next = cursor->next;
			else
				*head = cursor->next;
			free(cursor);
			return (1);
		}
	}
	return (-1);
}
