#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning
 *				    of a doublyy linked lists
 *@head: pointer to a pointer to the head of thelist
 *@n: the data of the new inserted node
 *Return: the address of the new element,
 *           or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;
	return (newNode);
}
