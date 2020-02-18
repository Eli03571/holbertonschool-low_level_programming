#include "holberton.h"
/**
 * print_alphabet - funtion to print the alphabet
 * Return: 0
 */
int print_alphabet(void)
{

	char i = 'a';

	while (i <= 'z')
	{
		_putchar (i);
		i++;

	}

	_putchar('\n');

	return (0);

}
