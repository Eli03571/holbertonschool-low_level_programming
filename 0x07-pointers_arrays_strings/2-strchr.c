#include "holberton.h"
/**
 * _strchr - unction that locates a character in a string.
 * @s: char pointer
 * @c: character
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{

	int i;

	for (; !!s[i]; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return ('\0');
}
