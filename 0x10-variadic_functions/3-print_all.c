#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - the finction all.
 *@format: inetegr
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list number;
	int d, i, size;
	char c, *s;
	char *separator;
	float f;

	va_start(number, format);

	i = 0;

	size = 0;

	separator = ", ";

	while (format[size] != '\0')
		size++;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 's':
				s = va_arg(number, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				separator = ", ";
				break;
			case 'i':
				d = va_arg(number, int);
				printf("%d", d);
				separator = ", ";
				break;
			case 'c':
				c = (char) va_arg(number, int);
				printf("%c", c);
				separator = ", ";
				break;
			case 'f':
				f = va_arg(number, double);
				printf("%f", f);
				separator = ", ";
				break;
			default:
				separator = "";
				break;
		}
		if (i != size - 1)
			printf(separator);
		i++;
	}
	printf("\n");
	va_end(number);
}
