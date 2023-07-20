#include "variadic_functions.h"
/**
 *print_numbers - print numbers
 *@separator: separate between numbers
 *@n: number to be printed
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ptr);
}
