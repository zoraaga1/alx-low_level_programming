#include <stdio.h>
/**
 * main - print int
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 0; a < 10; a++)
	{
		putchar (a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar (a);
	}
	putchar('\n');
	return (0);
}
