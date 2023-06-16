i#include <stdio.h>
/**
 * main - print alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	char letter1;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	for (letter1 = 'A'; letter1 <= 'Z'; ++letter1)
        {
                putchar(letter1);
        }

	putchar('\n');
	return (0);
}
