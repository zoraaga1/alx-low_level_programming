#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted
 */
int _atoi(char *s)
{
	int i, j, k, length, f, n;

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	f = 0;
	n = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] - '0';
			if (j % 2)
				n = -n;
			k = k * 10 + n;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (k);
}
