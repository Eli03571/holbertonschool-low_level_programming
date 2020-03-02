#include "holberton.h"
/**
 *main -function that returns the integer
 *@argc: integer
 *@argv: char the pointer
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
