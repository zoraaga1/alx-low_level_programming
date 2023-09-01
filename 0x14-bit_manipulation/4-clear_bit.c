#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit needs to be cleared.
 * @index: Index of the bit to be cleared (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _mask;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);
	_mask = ~(1UL << index);
	*n = *n & _mask;
	return (1);
}
