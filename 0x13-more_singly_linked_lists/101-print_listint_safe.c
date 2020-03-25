#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints
 *@head:pointer
 * Return: Always 0.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	size_t i = 0;
	const listint_t **htemp = NULL;

	htemp = malloc(sizeof(listint_t *) * 2048);
	if (htemp == NULL)
	{
		exit(98);
	}

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == htemp[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(htemp);
				return (n);
			}
		}
		htemp[n] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	free(htemp);
	return (n);
}
