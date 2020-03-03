#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - the function the copie array.
 * @str: chat the pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *erc;

	if (str == NULL)
		return (NULL);
	while (!!str[j])
		j++;
	j++;
	erc = malloc(sizeof(char) * j);
	if (erc == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		erc[i] = str[i];
	return (erc);
}
