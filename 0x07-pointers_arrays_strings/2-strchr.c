#include "holberton.h"
/**
 * _strchr - unction that locates a character in a string.
 * @s: char pointer
 * @c: character
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{

	int i, j;

	for (; !!s[i];)
	{
		i++;
	}


	for (j = 0; j < i; j++)

	{

		if (s[j] == c)
		{
			return (&s[j]);
		}

	}

	return ('\0');
}
