#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98 
 *
 * Return: n
 */


void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar("%d", n);
			if (n != 98)
			{
				_putchar(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			_putchar("%d", n);
			if (n != 98)
			{
				_putchar(", ");
			}
			n++;
		}
	}
	_putchar("\n");
}
