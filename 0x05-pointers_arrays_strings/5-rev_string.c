#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer value
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int size, j;
	char m;

	while (s[i] != '\0')
		i++;

	i--;
	size = i;
	j = i / 2;
	i = 0;

	while (i <= j)
	{
		m = s[i];
		s[i] = s[size];
		s[size] = m;
		i++;
		size--;
	}
}
