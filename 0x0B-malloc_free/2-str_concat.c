#include "holberton.h"
#include <stdlib.h>
<<<<<<< HEAD
/**
 * str_concat - the function concat
 *@s1:char the pointer
 *@s2:char the pointer
=======
#include <stdio.h>
/**
 * str_concat - the function concatenate.
 *@s1: chat the pointer
 *@s2: char the pointer
>>>>>>> a8edf3276387d01a8ac7c03a991e06c541f8e192
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
<<<<<<< HEAD
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
=======

	char *str;
	unsigned int i, j, k, l, sum;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; !!s1[i]; i++)
		lens1++;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; !!s2[j]; j++)
		lens2++;

	sum = lens1 + lens2 + 1;
	str = malloc(sum * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (k = 0; k < lens1; k++)
		str[k] = s1[k];
	for (l = 0; l < lens2; l++)
		str[k + l] = s2[l];

	str[k + l] = '\0';
	return (str);


>>>>>>> a8edf3276387d01a8ac7c03a991e06c541f8e192
}
