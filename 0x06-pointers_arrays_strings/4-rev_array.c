#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{

	int d = 0;
	int b;

	for (n--; n >= d; n--)
	{
		b = a[d];
		a[d] = a[n];
		a[n] = b;
		d++;
	}

}
