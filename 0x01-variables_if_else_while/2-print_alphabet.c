#include <stdio.h>
#include <unistd.h>
/**
 * main - print alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	write(\n);
	return (0);
}
