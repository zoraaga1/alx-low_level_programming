#include <stdio.h>
/**
 * main - print numbers with coma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; ++a)
	{
		putchar (a + '0');
		if (a < 9)
		{putchar (','); }
		if (a < 9)
		{putchar (' '); }
	}
	putchar ('\n');
	return (0);
}
