#include "holberton.h"
/**
<<<<<<< HEAD
 * more_numbers - print numbers from 0-9
=======
 * more_numbers - print numbers from 0 to 14.
>>>>>>> b3f9ab111992ceacaf6b934cbdb2b5b56bfc2405
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
<<<<<<< HEAD
	int w = 0;
	int y = 10;
	int z = 1;
	
	for(z = '1'; z <= 10; z++)
	{		
		for(w = '0'; w <= '9'; w++)
		{	
			_putchar(w);
		
			for(y = 10 ; y <= 14; y++)
			{
			_putchar(y);
			}

	}	}	
	_putchar('\n');
=======
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
>>>>>>> b3f9ab111992ceacaf6b934cbdb2b5b56bfc2405
}
