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
		if (isdigit(argv[i][0]))
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}
