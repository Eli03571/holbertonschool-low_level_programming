#include "holberton.h"
/**
 * string_toupper - function that changes all lowercase letters
 *@s: type char
 * Return: Always 0.
 */
char *string_toupper(char *s)

{
	int i = 0;

	for (; !!s[i];)
	{
		i++;
	}

	for (int j = 0; j < i; j++)
	{

		if ((s[j] > 96) && (s[j] < 123))
		{
			s[j] ^= 0x20;
		}
	}

	return (s);
}
