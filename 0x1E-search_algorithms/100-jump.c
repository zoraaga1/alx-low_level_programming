#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 *                using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *          or -1 if value is not present
 *          or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (array == NULL)
		return (-1);

	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	for (i = prev - step; i <= prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
