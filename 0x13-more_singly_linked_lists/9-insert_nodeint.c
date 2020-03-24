#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts a new node
 *@head: double pointer
 *@idx: integer unsigned
 *@n: integer
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *htemp = NULL;

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	htemp = *head;
	if (htemp == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i != (idx - 1))
	{
		htemp = htemp->next;
		if (htemp == NULL)
		{
			free(new);
			return (NULL);
		}
	i++;
	}

	new->next = htemp->next;
	htemp->next = new;
	return (new);
}
