#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: the datatype pointer of the struct
 * Return: the size of the list that was freed, sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int f;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}

	*h = NULL;
	return (x);
}

