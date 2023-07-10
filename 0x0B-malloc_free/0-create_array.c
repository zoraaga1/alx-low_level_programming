#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		arr = (char *)malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
				arr[i] = c;
		}
	}
	return (arr);
}
