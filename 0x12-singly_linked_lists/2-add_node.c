#include "lists.h"
#include <stdlib.h>

/**
 * _strlen -dunction that gets the length of the string
 * @s: the string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int a;

	for (a = 0; s[a]; a++)
		;
	return (a);
}

/**
 * add_node - function that adds new nodes to the list
 * @head: the current place in the list
 * @str: the string to add to the head
 * Return: pointer to the current position in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	int a, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		content[a] = str[a];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
