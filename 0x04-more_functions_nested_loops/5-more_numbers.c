#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{


	for (int a = 1; a <= 10; a++)
	{
		for (int b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
		}
		_putchar('\n');

	}

}

