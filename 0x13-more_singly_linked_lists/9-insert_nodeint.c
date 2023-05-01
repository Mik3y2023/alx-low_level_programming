#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position
 * @head: the pointer to the head of the node
 * @idx: the datatype of unsigned int index to add
 * @n: the contents of the new node
 * Return: the address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s = NULL;
	listint_t *t = NULL;
	unsigned int node = 0;

	s = malloc(sizeof(listint_t));
	if (s == NULL || idx > listint_len(*head))
	{
		free(s);
		return (NULL);
	}

	s->n = n;
	s->next = NULL;

	while (head != NULL)
	{
		if (node == idx)
		{
			if (node == 0)
			{
				s->next = *head;
				*head = s;

				return (s);
			}
			s->next = t->next;
			t->next = s;
			return (s);
		}
		else if ((node + 1) == idx)
			t = *head;
		head = &((*head)->next);
		node++;
		}
		return (NULL);
}

/**
 * listint_len - a function that counts the number of nodes in
 * a linked list
 * @h: the pointer to the head of the node
 * Return: the number of element nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
	size_t u = 0;

	while (c != NULL)
	{
		u += 1;
		c = c->next;
	}
	return (u);
}
