#include <stdio.h>
#include <math.h>
/**
 * print_triangle - Prints triangle with hashkey
 *@size : size of triangle
 * 
 */
int main(void)
{
	long int i, n, d;

	n = 612852475143;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
			i = 1;
		}
	}
	return (0);
}
