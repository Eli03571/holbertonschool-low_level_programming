#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit.
 *@n:integer
 *@index: unsigned int
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int digit = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	digit <<= index;

	if (digit & n)
		return (1);
	else
		return (0);
}
