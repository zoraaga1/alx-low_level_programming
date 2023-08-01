#include "lists.h"

/**
 * free_listint2 -  frees a list_t list.
 * @head: a pointer to pointer listint_t
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*(head))->next;
		free(current);
	}
	*head = NULL;
}
