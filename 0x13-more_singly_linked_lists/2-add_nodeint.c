#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: a pointer to the list_h
 * @n: the element to be added to the list_t
 * Return: If the function fails - NULL.
 *	Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);

}
