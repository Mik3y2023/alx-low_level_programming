#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 * @h: the datatype pointer of the struct *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}

	return (e);
}
