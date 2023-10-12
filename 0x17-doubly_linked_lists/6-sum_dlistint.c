#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a list
 * @head: Pointer to the head of the list
 * Return: the sum of all data values or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
