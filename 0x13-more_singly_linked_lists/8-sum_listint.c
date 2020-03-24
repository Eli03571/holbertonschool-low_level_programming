#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum
 *@head:the pointer
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		n = n + head->n;
		head = head->next;
	}

	return (n);


}
