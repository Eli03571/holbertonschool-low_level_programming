#include "holberton.h"
/**
 * more_numbers - print numbers from 0-9
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
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
}
