#include "main.h"

/**
 * print_array - prints array list with comma
 * @a : array name
 * @n : array length
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
		i++;
	}
	printf("\n");
}
