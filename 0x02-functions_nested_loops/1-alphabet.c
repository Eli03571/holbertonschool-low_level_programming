#include "holberton.h"
/**
 * print_alphabet - funtion to print the alphabet
 * Return: 0
 */
int print_alphabet(void)
{
	int i;
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < 26; i++)
	{
		_putchar (alpha[i]);

	}

	_putchar('\n');

	return (0);

}
