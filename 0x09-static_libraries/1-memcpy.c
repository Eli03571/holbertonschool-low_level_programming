#include "holberton.h"
/**
 * _memcpy- function that copies memory area.
 * @dest: char pointer
 * @src: chat pointer
 * @n: variable integer
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);

}
