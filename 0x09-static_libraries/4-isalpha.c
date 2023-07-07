#include "main.h"
/**
 * _isalpha - prints a return value
 *@c : char type letter
 *
 * Return: 1 if c is lowercase or uppercase
 * return: 0  otherwise
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
