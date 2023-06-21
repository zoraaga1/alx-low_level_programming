#include "main.h"
/**
 * print_last_digit - print 10 times the alphabet a-z in lowercase
 * @n: int type integer
 *
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = -1 * (n % 10);
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		lastdigit = n % 10;
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
