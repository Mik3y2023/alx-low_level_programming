#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: the datatype pointer of the struct *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;
	const listint_t *node = h;

	for (; node; node = node->next)
	{
		printf("%d\n", node->n);
		n++;
	}

	return (n);
}
