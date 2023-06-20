#include "main.h"
/**
 * print_sign - prints a return value and the number sign
 * "+" for positive numbers
 * "-" for negative numbers
 * "0" for zero number
 *@n : int type number
 *
 * Return: 1 if the number is greater than 0
 * Return: -1 if the number is less than 0
 * return: 0 if c in not in lowercase
 */

int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
	return (1);
	}
	else if ( n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
