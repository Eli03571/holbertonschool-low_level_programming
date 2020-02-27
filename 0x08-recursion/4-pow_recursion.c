#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{

	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);

	}

	if (y < 0)
	{
		return (-1);
	}
	return (x *_pow_recursion(x,--y));

}
