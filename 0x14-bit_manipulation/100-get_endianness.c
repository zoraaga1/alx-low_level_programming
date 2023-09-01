#include "main.h"

/**
 * get_endianness - checks if a machine's endianness is little or big.
 * Return: 0 if the machine is big endian,
 *		1 if it's little.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
