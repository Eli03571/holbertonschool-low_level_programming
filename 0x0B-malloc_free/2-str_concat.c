#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{

	char *str;
	unsigned int i ,j,k,l,sum;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	for(i = 0; !!s1[i]; i++)
		lens1++;
	if (s2 == NULL)
		s2 = "";
	for(j = 0; !!s2[j]; j++)
		lens2++;

	sum = lens1 + lens2 + 1;

	str = malloc(sum * sizeof(char));

	if (str == NULL)
		return(NULL);
	for(k = 0; k < lens1; k++)
		str[k] = s1[k];
	for(l = 0; l < lens2; l++)
		str[k + l] = s2[l];

	str[k + l] = '\0';

	return(str);



}
