#include <stdlib.h>
#include "lists.h"
/**
 * *find_listint_loop - function that finds the loop in a linked list.
 *@head: pointer
 * Return: Always 0.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pos1;
	listint_t *pos2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	pos1 = pos2 = head;
	while (!!pos2)
	{
		pos1 = pos1->next;
		pos2 = pos2->next->next;
		if (pos1 == pos2)
		{
			pos1 = head;
			break;
		}
	}
	if (pos1 == NULL || pos2 == NULL || pos2->next == NULL)
		return (NULL);
	while (pos1 != pos2)
	{
		pos1 = pos1->next;
		pos2 = pos2->next;
	}
	return (pos2);

}
