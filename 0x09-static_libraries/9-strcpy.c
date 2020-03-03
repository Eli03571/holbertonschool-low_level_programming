#include "holberton.h"
/**
 * _strcpy - the function by coopys.
 *@x: variable integer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{

	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x] = '\0';
	return (dest);
}
