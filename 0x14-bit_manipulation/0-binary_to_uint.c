#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: pointer to binary value
 *
 * Return: decimal number
 *		in error or null return 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int _result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			_result = _result << 1;
			_result = _result | (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	return (_result);
	}
}
