#include "main.h"
/**
 * _strncat - concatenates two strings with a limit of bytes.
 * @dest: string that will concatenate to another string
 * @src: string to be concatenated
 * @n: limit of bytes used from src string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int iS;
	int iD;

	iS = 0;
	iD = 0;

	while (dest[iD] != '\0')
		iD++;

	while (src[iS] != '\0' && iS < n)
	{
		dest[iD] = src[iS];
		iD++;
		iS++;
	}
	dest[iD] = '\0';
	return (dest);
}
