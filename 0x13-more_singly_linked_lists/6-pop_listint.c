#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 *@head: double pointer
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{

	listint_t *new = NULL;
	int n;

	if (*head == NULL)
		return (0);

	new = *head;
	n = new->n;

	*head = new->next;
	free(new);
	return (n);

}
