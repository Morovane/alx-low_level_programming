#include "lists.h"

/**
 * get_nodeint_at_index - that returns the nth node of a listint_t linked list.
 * @head: the listint_t
 * @index: the nth of the node to be searched
 * Return: list (tmp)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);

		tmp = head;
		head = head->next;
	}

	return (tmp);

}
