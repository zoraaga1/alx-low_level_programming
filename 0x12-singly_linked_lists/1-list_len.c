#include "lists.h"
/**
 * list_len - returns the number of elements in a singly linked list
 * @h:pointer to the head of a singly linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}

