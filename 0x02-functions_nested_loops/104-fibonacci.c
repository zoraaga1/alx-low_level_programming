#include <stdio.h>

/**
 * main - Prints the first 10 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{

	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 97)
		{
			printf("\n");
			break;
		}
		else
			printf(", ");
	}

	return (0);
}
