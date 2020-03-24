#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function two that frees
 *@head: double pointer
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{

	listint_t *htemp = NULL;
	listint_t *htemp2 = NULL;

	if (head == NULL)
		return;

	htemp = *head;

	while (htemp != NULL)
	{
		htemp2 = htemp;
		htemp = htemp->next;
		free(htemp2);
	}

	*head = NULL;

}
