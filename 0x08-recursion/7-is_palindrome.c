#include "holberton.h"
/**
 * is_palindrome - the function return palindrome.
 *@s: char the pointer
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int length;

	length = lengthc(s);

	if (length == 0)
	{
		return (1);
	}
	return (validate_palindrome(s, 0, length - 1));
}

/**
 * lengthc - the function longtitu.
 *@str: char the pointer
 * Return: Always 0.
 */
int lengthc(char *str)
{
	if (!!*str)
	{
		return (1 + lengthc(str + 1));
	}
	return (0);
}



/**
 * validate_palindrome- the function for validate.
 *@str: char
 *@ini: integer
 *@fin: integer
 * Return: Always 0.
 */
int validate_palindrome(char str[], int ini, int fin)
{
	if (ini >= fin)
	{
		return (1);
	}
	if (str[ini] != str[fin])
	{
		return (0);
	}
	if (ini <= fin || ini < fin + 1)
	{
		return (validate_palindrome(str, ++ini, --fin));
	}
	return (1);
}

