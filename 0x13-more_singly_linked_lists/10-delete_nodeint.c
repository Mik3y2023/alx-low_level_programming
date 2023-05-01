#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at the index of
 * a linked list
 * @head: the pointer to the head of the node
 * @index: the index of the node
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *s = NULL;
	listint_t *t = NULL;
	unsigned int m = 0, list_len = listint_len(*head);

	if ((index >  list_len) || (list_len == 0))
		return (-1);

	while (head != NULL)
	{
		if (m == index)
		{
			s = *head;
			if (m == 0)
			{
				*head = s->next;
				free(s);
				return (1);
			}
			t->next = s->next;
			free(s);
			return (1);
		}
		else if ((m + 1) == index)
			t = *head;
		head = &((*head)->next);
		m++;
	}
	return (-1);
}

/**
 * listint_len - a function that counts the number of nodes in a
 * linked list
 * @head: the pointer to the head of the node
 * Return: the number of element nodes
 */

size_t listint_len(const listint_t *head)
{
	const listint_t *c = head;
	size_t x = 0;

	while (c != NULL)
	{
		x += 1;
		c = c->next;
	}
	return (x);
}
