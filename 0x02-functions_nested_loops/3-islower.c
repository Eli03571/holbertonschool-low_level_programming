#include "holberton.h"
/**
 *int _islower - check the if return.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 120)
		return (1);

	else
		return (0);
}
