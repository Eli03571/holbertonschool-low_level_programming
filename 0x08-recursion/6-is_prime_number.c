#include "holberton.h"
/**
 * calculate_prime - the gunction auxiliare
 *@x: integer
 *@z: inetegr
 * Return: Always 0.
 */
int calculate_prime(int x, int z)
{
	if (x == z)
	{
		return (1);
	}
	else if  (z % x == 0)
	{
		return (0);
	}
	else
		return  (calculate_prime(++x, z));
}

/**
 * is_prime_number - the function prime number.
 *@n: ineteger
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	return (calculate_prime(2,  n));
}
