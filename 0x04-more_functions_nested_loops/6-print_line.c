#include "holberton.h"
/**
 * print_line - If n is 0 or less, the function should only print .
 *@n: line number
 * Return: Always 0.
 */
void print_line(int n)
{
	int a = 0;

	while (n > a)
	{
		_putchar('_');
		a++;
	}

	_putchar('\n');

}
