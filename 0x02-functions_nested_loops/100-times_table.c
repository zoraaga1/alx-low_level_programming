#include <stdbool.h>
#include "main.h"
/**
 * print_times_table - Print the 9 times n table, starting with 0
 * 		don't print if the number is negative or greater than 15
 * @n : int number to start the table from
 * Return: 0(Success)
 */

void print_times_table(int n)
{
	int a = 0;
	int b;
	int c;

	if (n < 0 || n > 15)
	return;
	while (a <= n)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > 99)
			{
				_putchar(z / 100 + '0');
				_putchar((z / 10 % 10) + '0');
				_putchar(z % 10 + '0');
			}
			else if (z > 9)
			{
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
				_putchar(z + '0');
			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
