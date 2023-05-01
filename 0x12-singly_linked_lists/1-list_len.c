#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: the list
 * Return: no. of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t e;

	for (e = 0; h; h = h->next)
		e++;

	return (e);
}
