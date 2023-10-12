#include "lists.h"

/**
 *free_dlistint - frees a doublyy linked lists
 *@head: pointer to a pointer to the head of thelist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
