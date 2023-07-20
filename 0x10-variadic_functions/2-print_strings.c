#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: separate between numbers
 *@n: number of strings be printed
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
