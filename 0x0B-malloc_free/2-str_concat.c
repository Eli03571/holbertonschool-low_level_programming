#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - the function concat
 *@s1:char the pointer
 *@s2:char the pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i,j,k,l,sum;
	unsigned int lins1 = 0;
	unsigned int lins2 = 0;
	char *por;

	if (s1 == NULL)
		return("");
	for (i = 0; !!s1[i];)
		lins1++;
	if (s2 == NULL)
		return("");
	for(j = 0; !!s2[j])
		lins2++;
	sum = lins1 + lins2 + 1;

	por = malloc(sizeof(char) * sum);
	if (por == NULL)
		return (NULL);
	for (k = 0; k < lins1; k++)
		 por[k] = s1[l];
	for (l = 0; l < lins2; l++)
	por[k + l] = '\0';
	return(po);
}
