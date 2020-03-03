#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_triangle(int size)

{
	int a = 1;
	int b = 2;

	while (a <= size)
	{
		while (b <= size)
		{
			_putchar(' ');
			b++;
		}
		_putchar('#');
		a++;
		_putchar('\n');
	}
	if (size < 2)
		_putchar('\n');

}

