#include "holberton.h"
/**
 * print_alphabet_x10 - funtion to print the alphabet
 * Return: 0
 */
int print_alphabet_x10(void)
{
	char i;
	char a = 0;

	while (a < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		a++;
	_putchar ('\n');
	}
	return (0);
}
