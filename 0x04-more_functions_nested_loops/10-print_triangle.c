#include "main.h"
/**
 * print_triangle - Prints triangle with hashkey
 *@size : size of triangle
 */
void print_triangle(int size)
{
	int times, s, h;

	for (times = size; times > 0; times--)
	{
		for (s = 1 ; s < times; s++)
		{
			_putchar(' ');
		}
		for (h = size; h >= times; h--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
