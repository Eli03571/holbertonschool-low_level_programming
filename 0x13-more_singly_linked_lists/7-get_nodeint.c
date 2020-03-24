#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 *@head: pointer
 *@index: integer unsigned
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *htemp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index == i)
		{
			htemp = head;
		return (htemp);
		}
		i++;
	head = head->next;
	}

	return (NULL);




}
