#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer value
 *
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		return (s[i]);
		i--;
	}
}
