#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function what bring back numbers
 *@list_t; list
 *@h: pointer
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	do {
		if (h == NULL)
		{
			return (0);
		}
		h = h->next;
		i++;
	} while (h != NULL);
	return (i);
}
