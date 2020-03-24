#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees
 *@head: pointer
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{

	listint_t *htemp = NULL;


	while (head != NULL)
	{
		htemp = head;
		head = head->next;
		free(htemp);
	}
}
