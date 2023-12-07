#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add a new element at the beginning of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Value to be assigned to the new node
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
