#include "main.h"
/**
 * jack_bauer - rints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: no return value
 */

void main(void)
{
	int m = 0;
	int a = 0, b = 0, c = 0, d = 0;

	while (m < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		m++;
	}
}
