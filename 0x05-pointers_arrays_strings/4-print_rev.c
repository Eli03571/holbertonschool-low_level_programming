#include "holberton.h"
/**
 * print_rev - the function print reverse.
 *@s: char the pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{

	int i = 0;

	for (; !!s[i];)
	{
		i++;
	}

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
