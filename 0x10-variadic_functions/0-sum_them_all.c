#include "variadic_functions.h"
/**
 * sum_them_all - sum of variadic variable
 * @n: arg int
 * return: sum
 * 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
