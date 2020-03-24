#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that print node the end
 *@head: double pointer
 *@n: integer
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *htemp = NULL;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}

	htemp = *head;

	while (htemp->next != NULL)
	{
		htemp = htemp->next;
	}

	htemp->next = new;
	new->next = NULL;
	return (*head);

}
