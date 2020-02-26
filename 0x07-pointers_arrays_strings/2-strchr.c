#include "holberton.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char pointer
 * @c: character
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	while (!!*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
