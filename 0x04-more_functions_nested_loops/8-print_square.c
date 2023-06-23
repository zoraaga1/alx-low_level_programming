#include "main.h"
/**
 * print_square - Print a square for n time
 * @n : number of times to print
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
