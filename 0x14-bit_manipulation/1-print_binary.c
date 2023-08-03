#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int size;
	int i;
	int started;
        unsigned long int mask;
        unsigned long int bit;

	size = sizeof(n) * 8;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

    
	for (i = size - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		bit = n & mask;

		if (bit)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
	}
}

