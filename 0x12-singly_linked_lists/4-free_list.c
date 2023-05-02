#include "lists.h"

/**
 * free_list - fubction that frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
