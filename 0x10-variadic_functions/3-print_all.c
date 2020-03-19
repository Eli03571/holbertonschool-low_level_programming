#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - the finction strings.
 *@s: char the pointer
 * Return: Always 0.
 */
char *print_string(char *s)
{
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
	return (", ");
}
/**
 * print_integer - the function integer.
 *@i: inetegr
 * Return: Always 0.
 */
char *print_integer(int i)
{
	printf("%d", i);
	return (", ");
}
/**
 * print_char - the function char.
 *@c: char
 * Return: Always 0.
 */
char *print_char(char c)
{
	printf("%c", c);
	return (", ");
}
/**
 * print_float - the function float.
 *@f: float
 * Return: Always 0.
 */
char *print_float(float f)
{
	printf("%f", f);
	return (", ");
}
/**
 * print_all - the finction all.
 *@format: inetegr
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list number;
	int i = 0, size = 0;
	char *separator = ", ";

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(number, format);
	while (format[size] != '\0')
		size++;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 's':
				separator = print_string(va_arg(number, char *));
				break;
			case 'i':
				separator = print_integer(va_arg(number, int));
				break;
			case 'c':
				separator = print_char(va_arg(number, int));
				break;
			case 'f':
				separator = print_float(va_arg(number, double));
				break;
			default:
				separator = "";
			break;
		}
		if (i != size - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(number);
}
