#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump search algorithm
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present or if list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *current = list, *prev = NULL;
	size_t i;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; current->next != NULL && i < jump; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);  # noqa

	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
