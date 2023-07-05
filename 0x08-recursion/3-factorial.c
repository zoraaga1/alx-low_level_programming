#include "main.h"
/**
 * factorial - Prints teh factorial with recursion method
 * @n: int number
 *
 * Return: 1 for n = 0
 * -1 if n < 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
