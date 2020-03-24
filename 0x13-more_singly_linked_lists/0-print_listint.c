#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function for linked list
 *@h: pointer
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *htemp = h;

	if (htemp == NULL)
		return (0);


	do {
		printf("%d\n", htemp->n);
		htemp = htemp->next;
		i++;
	} while (htemp != NULL);
	return (i);

}
