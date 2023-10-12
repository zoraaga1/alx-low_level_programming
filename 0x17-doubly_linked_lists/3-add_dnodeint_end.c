#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end
 *				    of a doublyy linked lists
 *@head: pointer to a pointer to the head of thelist
 *@n: the data of the new inserted node
 *Return: the address of the new element,
 *           or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *current;

		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
		newNode->prev = current;
	}

	return (newNode);
}
