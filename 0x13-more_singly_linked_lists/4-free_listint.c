#include "lists.h"

/**
 * free_listint -  frees a list_t list.
 * @head: a pointe listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->n);
		free(current);
	}
}

