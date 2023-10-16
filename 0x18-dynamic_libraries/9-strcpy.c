#include "main.h"

/**
 * *_strcpy - Copies a string
 *
 * @dest: the destination buffer
 * @src : source of integer
 *
 * Return: det (String)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
