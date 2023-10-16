#include "main.h"
/**
 * _islower - prints a return value
 *@c : char type letter
 *
 * Return: 1 if c is lowercase
 * return: 0 if c in not in lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
