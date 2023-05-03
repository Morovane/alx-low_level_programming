#include "lists.h"

/**
 * free_listint - fubction that frees a listint_t list.
 * @head: A pointer to the list_t list.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t tmp;

	while (head)
	{
		tmp = head->next;
		free(head->n);
		free(head);
		head = tmp;
	}
}
