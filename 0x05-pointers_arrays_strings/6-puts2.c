#include "holberton.h"
/**
 * puts2- the function is integer s.
 *@str: char the pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	for (; !!str[i];)
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
