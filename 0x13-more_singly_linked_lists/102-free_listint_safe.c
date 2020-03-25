#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - fuction safe
 *@h: double pointer
 * Return: Always 0.
 */
size_t free_listint_safe(listint_t **h)
{

	size_t n = 0;
	size_t i = 0;
	const listint_t **htemp = NULL;

	if (*h == NULL || h == NULL)
		return (0);

	htemp = malloc(sizeof(listint_t *) * 2048);
	if (htemp == NULL)
	{
		exit(98);
	}

	while (*h != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (*h == htemp[i])
			{
				*h = NULL;
				free(htemp);
				return (n);
			}
		}
		htemp[n] = *h;
		free(*h);
		*h = (*h)->next;
		n++;
	}
	free(htemp);
	return (n);
}
