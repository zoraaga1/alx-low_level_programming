#include "lists.h"
/**
 * listint_len - returns the number of elements in a singly linked list
 * @h:pointer to the head of a singly linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}

