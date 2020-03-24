#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function for print long.
 *@h: the pointer
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{

	int i = 0;
	const listint_t *htemp = h;

	if (htemp == NULL)
		return (0);


	do {
		htemp = htemp->next;
		i++;
	} while (htemp != NULL);
	return (i);




}
