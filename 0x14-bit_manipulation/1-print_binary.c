#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 *@n:integer
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned int size = (sizeof(n) * 8);
	unsigned int digit = 1;
	unsigned int i = 0;
	unsigned long int bin1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i < size)
	{
		bin1 = (n << 1);
		bin1 >>= 1;
		if (bin1 != n)
		{
			digit = 0;
			_putchar('1');
		}
		else if (!digit)
			_putchar('0');
		n <<= 1;
		i++;
	}
	if (digit)
		_putchar('0');
}
