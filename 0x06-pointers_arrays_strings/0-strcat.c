#include "holberton.h"
/**
 * _strcat - function that concatenates two strings..
 *@dest: char pointer
 *@src: char pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	for (; !!dest[i];)
	{
		i++;
	}

	for (; !!src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);


}
