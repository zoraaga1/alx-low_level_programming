#include "lists.h"

/**
 *dlistint_len -  returns the number of elements
 *                  in a linked dlistint_t list.
 *@h: represents a pointer to the head of a singly linked list
 *
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
