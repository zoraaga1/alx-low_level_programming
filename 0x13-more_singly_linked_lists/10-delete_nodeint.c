#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the pointer of the head node
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL && count < (index - 1))
	{
		current = current->next;
		count++;
	}
	if (current != NULL && current->next != NULL)
	{
		temp = current->next;
		current->next = current->next->next;
		free(temp);
		return (1);
	}
	return (-1);
}

