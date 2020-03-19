#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- function for print strings.
 *@separator: pointer
 *@n: integer
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list strings;
	unsigned int i;
	char *sep;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		sep = va_arg(strings, char *);
		if (sep != NULL)
		{
			printf("%s", sep);
		}

		else
		{
			printf("(nil)");
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(strings);

}
