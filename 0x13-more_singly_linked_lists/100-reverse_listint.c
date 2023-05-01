#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked
 * list
 * @head: the pointer to the head of the node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *t = NULL, *v;

	if (!*head)
		return (0);
	while ((*head)->next != NULL)
	{
		v = (*head)->next;
		(*head)->next = t;
		t = (*head);
		(*head) = v;
	}

	(*head)->next = t;
	return (*head);
}
