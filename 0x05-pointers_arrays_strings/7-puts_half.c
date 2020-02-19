#include "holberton.h"
/**
 * puts_half - the function is half.
 *@str: char type
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;

	for (; !!str[i];)
	{
		i++;
	}
	i = i / 2;

	for (; !!str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
