#include "holberton.h"
#include "stdio.h"
/**
 * rev_string - the fuction is reverse.
 *@s: char reverse
 * Return: Always 0.
 */
void rev_string(char *s)
{

	int i = 0;
	int d = 0;
	char a;

	for (; !!s[i];)
	{
		i++;
	}
	for (i--; i >= d; i--)
	{
		a = s[d];
		s[d] = s[i];
		s[i] = a;
		d++;
	}
}
