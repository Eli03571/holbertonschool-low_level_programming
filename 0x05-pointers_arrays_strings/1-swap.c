#include "holberton.h"
/**
 * swap_int - a function takes two integers.
 *@a: integer pointer
 *@b: integer pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int auxiliar;

	auxiliar = *a;
	*a =  *b;
	*b = auxiliar;

}
