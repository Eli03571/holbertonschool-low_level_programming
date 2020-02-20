#include "holberton.h"
#include <stdio.h>
/**
 * print_array- the function printf arrays.
 *@a:number array
 *@n: number integer
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) - n)
		{
			printf(", ");
		}
	}
		printf("\n");
}
