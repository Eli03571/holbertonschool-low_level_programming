#include "holberton.h"
/**
 *_islower - check the if return.
 *@c: parameter integer
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 120)
		return (1);
	else
		return (0);
}
