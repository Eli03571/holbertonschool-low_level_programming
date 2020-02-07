#include <stdio.h>
/**
 * main - main block
 * Description: print from a to z chars followed by chars from A to Z
 * Return: 0
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; ++character)
	{
		putchar(character);
	}
	for (character = 'A'; character <= 'Z'; ++character)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
