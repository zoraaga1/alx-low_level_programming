#include "main.h"
/**
 * print_line - Print the sign _ n time
 * @n : number of times to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (n <= 1)
		{
			_putchar('\n');
		}
	_putchar('_');
	}
	_putchar('\n');
}
