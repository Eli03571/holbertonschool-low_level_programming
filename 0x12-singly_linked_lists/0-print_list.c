#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function print list
 *@h: pointer
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	unsigned int n;
	char *s;
	const list_t *htemp = h;

	if (htemp == NULL)
		return (0);


	do {
		s = htemp->str;
		n = htemp->len;
		if (s == NULL)
		{
			s = "(nil)";
			n = 0;
		}
		printf("[%u] %s\n", n, s);
		htemp = htemp->next;
		i++;
	} while (htemp != NULL);
	return (i);

}
