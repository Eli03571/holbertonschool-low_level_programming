#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{

	int i;
	int s = 0;

	for (i = 0; i < size; i++)
	{
		s = s + *a[i][i];
	}
	_putchar(s);

}
