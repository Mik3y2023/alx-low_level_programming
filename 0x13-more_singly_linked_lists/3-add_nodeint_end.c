#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a
 * listint_t
 * @head: the pointer to the head of the node
 * @n: the datatype integer for the struct
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *abc = *head;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	} else
		return (NULL);
	if (abc != NULL)
	{
		while (abc->next != NULL)
			abc = abc->next;

		abc->next = new;
	} else
		*head = new;

	return (new);
}
