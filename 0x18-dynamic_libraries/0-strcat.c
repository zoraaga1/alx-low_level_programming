#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string that will concatenate to another string
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int iS;
	int iD;

	iS = 0;
	iD = 0;

	while (dest[iD] != '\0')
		iD++;

	while (src[iS] != '\0')
	{
		dest[iD] = src[iS];
		iD++;
		iS++;
	}
	dest[iD] = '\0';
	return (dest);
}
