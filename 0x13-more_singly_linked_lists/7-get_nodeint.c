#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * @head: the pointer to the head of the node
 * @index: the index of the node
 * Return: the address of the node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;

	while (head)
	{
		if (m++ == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
