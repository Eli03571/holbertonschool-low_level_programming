#include "holberton.h"
/**
 * _strcmp - function that compares two strings..
 *@s1:pointer number one
 *@s2:pointer number two
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; !!s1[i]; i++)
	{

	}

	for (i = 0; !!s2[i]; i++)
	{

		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

	}

	return (0);
}
