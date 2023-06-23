#include "main.h"
/**
 * print_diagonal - Print diagonal n time
 * @n : number of times to print
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
}
