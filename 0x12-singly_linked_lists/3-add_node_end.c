#include "lists.h"

/**
 * add_node_end - function that adds a node to a singly linked list
 * @head: the pointer to the head of the list
 * @str: the data to store *
 * Return: the pointer to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *abc = *head;

	node = malloc(sizeof(*node));
	if (node)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;
		if (!(*head))
		{
			*head = node;
			return (node);
		}
		while (abc->next)
			abc = abc->next;
		abc->next = node;
	}

	return (node);
}
