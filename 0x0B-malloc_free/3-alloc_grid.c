#include "holberton.h"
#include <stdlib.h>
/**
 * aloc_grid - the function two file multidimentional
 *@width: integer
 *@height:integer
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **str;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	str = malloc(height * sizeof(int *));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(width * sizeof(int *));
		if (str[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			str[i][j] = 0;
	}
	return (str);






}
