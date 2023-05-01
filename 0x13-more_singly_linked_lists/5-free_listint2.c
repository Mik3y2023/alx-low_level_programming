#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the pointer to the head of the node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *abc;

	while (*head)
	{
		abc = (*head)->next;
		free(*head);
		*head = abc;
	}

	*head = NULL;
}
