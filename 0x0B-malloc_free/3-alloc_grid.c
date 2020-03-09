#include "holberton.h"
#include <stdlib.h>
/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
 *
=======
 * aloc_grid - the function two file multidimentional
 *@width: integer
 *@height:integer
>>>>>>> a8edf3276387d01a8ac7c03a991e06c541f8e192
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
<<<<<<< HEAD

	
=======
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
		{
			for (j = 0; j < i;  j++)
				free(str[j]);
			free(str);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			str[i][j] = 0;
	}
	return (str);




>>>>>>> a8edf3276387d01a8ac7c03a991e06c541f8e192


}
