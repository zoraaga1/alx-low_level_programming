#include <stdio.h>
/**
 * main - Print all combinations of two different digits,
 * 	separate two numbers by space,
 * 	separate four numbers by comma and space,
 *        
 *
 * Return: Always 0 (Success)
 */
int main(void) {
	int a;
	int b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
				if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
