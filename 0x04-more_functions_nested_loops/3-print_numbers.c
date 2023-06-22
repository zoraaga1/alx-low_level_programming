#include "main.h"
/**
 * print_numbers - Print numbers 0-9
 * Return: numbers from 0 to 9
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
			i++;
	}
	return (i);
	_putchar('\n');
}
