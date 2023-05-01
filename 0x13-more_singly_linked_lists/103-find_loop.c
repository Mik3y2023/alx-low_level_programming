#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts,
 * or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *g = head;
	listint_t *i = head;

	if (!head)
		return (NULL);

	while (g && i && i->next)
	{
		i = i->next->next;
		g = g->next;
		if (i == g)
		{
			g = head;
			while (g != i)
			{
				g = g->next;
				i = i->next;
			}
			return (i);
		}
	}
	return (NULL);
}
