#include "holberton.h"
/**
 * _strchr - unction that locates a character in a string.
 * @s: char pointer
 * @c: character
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{


	while (!!s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (s);
}
