#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian
 *		1 if little endian
 */
int get_endianness(void)
{
	unsigned int k;
	char *ch;

	k = 1;
	ch = (char *) &k;
	return ((int)*ch);
}
