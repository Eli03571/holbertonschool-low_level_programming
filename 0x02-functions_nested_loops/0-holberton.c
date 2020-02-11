#include "holberton.h"
/**
 * main - main block
 * Description: print Holberton
 * Return: 0
 */
int main(void)
{
	char holberton[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (int i = 0; i < 10; i++)
	{

		_putchar (holberton[i]);
	}

	_putchar('\n');

	return (0);

}
