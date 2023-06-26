#include "main.h"

/**
 * puts2 - print first char to the end
 *		with skipping one char
 * @str: a chain of character
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

