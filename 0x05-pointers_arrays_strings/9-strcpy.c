#include "holberton.h"
/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src);
{

	





=======
 * _strcpy - the function by coopys.
 *@x: variable integer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{

	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x] = '\0';
	return (dest);
>>>>>>> 7eba6693d4779f66a9169fc1eb0bf4c91a9dc77f
}
