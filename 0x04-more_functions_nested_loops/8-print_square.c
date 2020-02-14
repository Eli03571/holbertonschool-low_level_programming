#include "holberton.h"

/**
 * print_square - print square number.
 *@size: square
 * Return: Always 0.
 */
void print_square(int size)
{
        int a = 1;
        int b;

        while (a <= size)
        {
                b = 1;
                while (b <= size)
                {
                        _putchar('#');
                        b++;
                }
                _putchar('\n');
                a++;
        }
        if (size < 1)
                _putchar('\n');

}
