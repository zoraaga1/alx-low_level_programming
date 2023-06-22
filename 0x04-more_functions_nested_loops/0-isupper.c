#include "main.h"
/**
 * _isupper - Return 1 to the main if the char c is uppercase alphabet
 *		Return 0 to the main if the char is not uppercase alphabet
 * @c : char a-z or A-Z
 *
 * Return: 1 (Success)
 *		0 (if c is not uppercase)
 */
int _isupper(int c)
{
	if (c > 96 && c < 123)
	return (0);
	else
	return (1);
}
