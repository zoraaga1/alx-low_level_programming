#include "lists.h"

i/**
 *print_list - prints all the elements
				of a singly linked lists
 *@h :  represents a pointer to the head of a singly linked list
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return node_count;
}
