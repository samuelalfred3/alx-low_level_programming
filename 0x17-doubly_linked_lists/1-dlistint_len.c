#include "lists.h"

/**
 * dlistint_len - Return the length of the linked list
 * @h: Pointer to the head of the list
 * Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
