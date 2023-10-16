#include "main.h"
/**
 * _strncpy -  a function that copies a string.
 * @dest: string that will copy in.
 * @src: string to be copied.
 * @n: limit of bytes used from src string
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
