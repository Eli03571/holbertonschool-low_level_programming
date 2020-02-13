#include "holberton.h"
/**
 *_isdigit - check number is digit.
 *@c: digit number
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > 0 && c < 57)
		return (1);
	else
		return (0);
}

