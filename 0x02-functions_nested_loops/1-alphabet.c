#include "main.h"
/**
 * print_alphabet - print alphabet a-z in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
