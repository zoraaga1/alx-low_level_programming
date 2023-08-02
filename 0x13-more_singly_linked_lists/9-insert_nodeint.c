#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 *				at a given position in a listint_t linked list
 * @head: Pointer to the pointer of the head node
 * @idx: Index where the new node
 *		should be inserted (starting from 0)
 * @n: Data (n) to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL && count < (idx - 1))
	{
		current = current->next;
		count++;
	}
	if (current != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	return (NULL);
}

