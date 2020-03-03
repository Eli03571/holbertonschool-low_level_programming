#include "holberton.h"
/**
 * _strstr - function that locates a substring..
 * @haystack: char the pointer
 * @needle: chat the pointer
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{

	const char *a, *b;

	if (!haystack || !needle)
	{
		return (0);
	}

	if (!*needle)
	{
		return ((char *)haystack);
	}

	for (; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			b = haystack;
			a = needle;
			for (; *b; a++, b++)
			{
				if (*b != *a)
				{
					break;
				}
			}

			if (!*a)
			{
				return ((char *)haystack);
			}
		}
	}

	return (0);

}
