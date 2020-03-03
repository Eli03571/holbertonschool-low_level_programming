#include "holberton.h"
/**
 * _strlen - the function takes longitud
 *@s: sixeof *s
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	for (; !!s[i];)
	{
		i++;
	}
	return (i);
}
