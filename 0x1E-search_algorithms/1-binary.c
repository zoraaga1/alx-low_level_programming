#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                  using the Binary search algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: the index where value is located,
 *          or -1 if value is not present
 *          or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m, i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		m = (l + r) / 2;

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
