#include "main.h"
/**
 * _strlen - calculates the length the variable
 *
 * @s : chaine of character
 *
 * Return : 0 or 1
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
