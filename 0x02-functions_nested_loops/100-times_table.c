#include <stdbool.h>
#include "main.h"
/**
 * times_table - Print the 9 times n table, starting with 0
 * 		don't print if the number is negative or greater than 15
 * @, : int number to start the table from
 * Return: 0(Success)
 */

void print_times_table(int n)
{
	int a = 0;
	int b;
	int c;

    if (n < 0 || n > 15)
    return(false);
    while (a <= n)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
            if (c > 9)
			{
		        if (c > 99)
		        {
                putchar(c / 100 + '0');
                putchar(c %100 / 10 + '0');
				putchar(c % 10 + '0');
                }
				else
				{
                putchar(c / 10 + '0');
				putchar(c % 10 + '0');
				}
		    }
			else if (b != 0)
			{
				putchar(' ');
				putchar(c + '0');
			}
			else
			{
				putchar(c + '0');
			}

			if (b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		putchar('\n');
		a++;
	}
}
}
