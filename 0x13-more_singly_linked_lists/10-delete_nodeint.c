#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 *@head: double pointer
 *@index: integer unsigned
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *htemp = *head;
	listint_t *htemp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = htemp->next;
		free(htemp);
		return (1);
	}

	while (i != (index - 1))
	{
		htemp = htemp->next;
		if (htemp == NULL)
		{
			return (-1);
		}
	i++;
	}
	htemp2 = htemp->next;
	htemp->next = htemp2->next;
	free(htemp2);
	return (1);
}
