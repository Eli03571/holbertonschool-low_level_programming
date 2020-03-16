#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function for print numbers
 *@n: integer
 *@separator:pointer
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list number;


	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(number);

}
