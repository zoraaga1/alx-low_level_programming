#include "main.h"
/**
 * jack_bauer - rints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: 0 (Success)
 */

void main(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(':');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar('\n');
		}
	}
	putchar('\n');
	return (0);
}
