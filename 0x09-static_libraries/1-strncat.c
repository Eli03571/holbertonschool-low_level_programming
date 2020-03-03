#include "holberton.h"
/**
 * _strncat-function that concatenates two strings.
 *@dest: char pointer
 *@src:char pointer
 *@n: integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	for (; !!dest[i];)
	{
		i++;
	}
	for (; j < n && !!src[j]; j++)
	{
		dest[j + i] = src[j];
	}
	return (dest);
}
