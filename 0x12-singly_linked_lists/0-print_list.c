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
	char *s;

	do {
		s = h->str;
		if (s == NULL)
			s = "nil";
		printf("[%d] %s\n", h->len, s);
		h = h->next;
		i++;
	} while (h != NULL);
	return (i);

}
