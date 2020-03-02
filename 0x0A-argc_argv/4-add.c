#include "holberton.h"
/**
 *main -function that returns the integer
 *@argc: integer
 *@argv: char the pointer
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; !!argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
