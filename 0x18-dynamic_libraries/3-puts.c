#include "main.h"

/**
 * _puts - Prints a list of character or a string with the pointer
 *		followed by a new line
 * @str: chaine of characters
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
