#include <stdarg.h>
/**
 * sum_them_all - function for write parameter.
 *@n: integer
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int sum = 0;
	unsigned int i;

	va_list valist;

	va_start(valist, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
