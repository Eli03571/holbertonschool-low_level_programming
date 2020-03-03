#include "holberton.h"
/**
 * _puts - the function is stdout.
 *@str: variable char
 * Return: Always 0.
 */
void _puts(char *str)
{

	int x = 0;

	for (; !!str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');

}
