#include "lists.h"

/**
 * sum_listint - that returns the sum of all the data of a listint_t
 * @head: the listint_t
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
