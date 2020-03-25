#include <stdlib.h>
#include "lists.h"
/**
 * *reverse_listint - function that reverses
 *@head: double pointer
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *nextn, *prev = NULL;

	if (head == NULL)
		return (NULL);

	nextn = *head;
	while (nextn != NULL)
	{
		nextn = nextn->next;
		nextn = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nextn;
	}
	*head = prev;
	return (*head);
}
