#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to print
 * @size: The size of the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Searches for a value in a sorted array
 *                             of integers using recursion
 * @array: A pointer to the first element of the array
 * @low: The starting index of the search range
 * @high: The ending index of the search range
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		print_array(array + low, high - low + 1);
		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			if (array[mid - 1] == value)
				return (advanced_binary_recursive(array, low, mid, value));
			return (mid);
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using the Advanced Binary search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
