#include "lists.h"

/**
 * free_list - frees all list
 * @head: head
 * Return: no return at this time.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
