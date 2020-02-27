#include "holberton.h"
/**
 * calculate_natural_square - the fuction auxiliare
 *@base: ineteger
 *@exp: integer
 * Return: Always 0.
 */
int calculate_natural_square(int base, int exp)
{
	if (base == (exp * exp))
	{
		return (exp);
	}
	if (exp  * exp  >  base)
	{
		return (-1);
	}
	return (calculate_natural_square(base, ++exp));
}

/**
 * _sqrt_recursion - the fuction returns the natural square root of a numbe
 *@n: ineteger
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n  < 1)
	{
		return (-1);
	}
	return (calculate_natural_square(n, 1));
}

