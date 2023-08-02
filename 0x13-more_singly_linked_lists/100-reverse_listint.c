#include "lists.h"

/**
 * reverse_help - recursively reverses a listint list
 *
 * @first: node to reverse
 * @second: node after node to reverse
 *
 * Return: void
 */
listint_t *reverse_help(listint_t *first, listint_t *second)
{
	listint_t *ptr, *prev = NULL;

	ptr = first;
	while (ptr->next != second)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = ptr->next;
	if (first != ptr && second != first)
		second = reverse_help(second, first);
	ptr->next = second;
	return (ptr);
}

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the pointer of the head node
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_help(*head, NULL);
	return (*head);
}

