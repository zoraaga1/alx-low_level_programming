#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 *					using the Exponential search algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *			or -1 if value is not present
 *			or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, lo, hi;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	lo = bound / 2;
	hi = bound < size - 1 ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);

	return (bin_search(array, lo, hi, value));
}

/**
 * bin_search - searches for a value
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *         or -1 if value is not present
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
