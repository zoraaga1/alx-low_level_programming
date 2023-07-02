#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 97 && str[index] <= 122)
			{
				while (!(str[index] >= 'a' && str[index] <= 'z'))
				index++;
				str[index] -= 32;
			}
			index++;
	}
	return (str);
}
