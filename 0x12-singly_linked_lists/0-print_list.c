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

	if (h == NULL)
	{
		printf("[0]()\n");
		return (0);
	}
	do {
		s = h->str;
		n = h->len;
		if (s == NULL)
		{
			s = "nil";
			n = 0;
		}
		printf("[%d] %s\n", n, s);
		h = h->next;
		i++;
	} while (h != NULL);
	return (i);

}
