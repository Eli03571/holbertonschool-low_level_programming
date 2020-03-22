#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - fuction new node benning.
 * @head:double pointer
 * @str:strings const
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));
	int n = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
		n++;
	new->len = n;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
