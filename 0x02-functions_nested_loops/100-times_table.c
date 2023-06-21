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
		for (b= 0; b <= n; b++)
		{
			c = a * b;
			if (c > 99)
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10 % 10) + '0');
				_putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
				_putchar(c + '0');
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
