#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint -function that converts a binary number
 * @b:pointer
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j = 0;

	if (b == NULL)
		return (0);
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		i <<= 1;
		if (b[j] == '1')
			i ^= 1;
		j++;
	}
	return (i);
}
