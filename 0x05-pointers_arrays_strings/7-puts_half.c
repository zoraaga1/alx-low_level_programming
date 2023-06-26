#include "main.h"

/**
 * puts_half - prints last half char to the end
 *		if the length is even,
 *		Prints the last n/2 char
 *		if the length is odd,
 *		Prints the n-1/2 chars
 * @str: a chain of character
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
