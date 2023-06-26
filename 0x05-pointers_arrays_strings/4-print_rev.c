#include "main.h"

/**
 * print_rev - Prints a char pointer in reverse
 * @s: pointer value
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
