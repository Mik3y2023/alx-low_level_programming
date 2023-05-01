#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: the pointer to head
 */
void free_list(list_t *head)
{
	list_t *abc;

	while (head)
	{
		free(head->str);
		abc = head->next;
		free(head);
		head = abc;
	}
}
