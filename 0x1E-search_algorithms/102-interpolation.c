#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *         or -1 if value is not present or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
