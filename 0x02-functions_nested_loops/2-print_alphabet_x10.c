#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet a-z in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	do	{
	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
	i++;
	_putchar('\n');
	}	while (i != 10);
}
