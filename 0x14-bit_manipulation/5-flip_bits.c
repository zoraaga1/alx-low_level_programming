#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 *		to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _xor_result;
	unsigned int _count;

	_count = 0;
	_xor_result = n ^ m;
	while (_xor_result)
	{
		_count += _xor_result & 1;
		_xor_result >>= 1;
	}
	return (_count);
}
