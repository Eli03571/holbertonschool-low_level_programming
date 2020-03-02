#include "holberton.h"
/**
 *main -function that returns the integer
 *@argc: integer
 *@argv: char the pointer
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
